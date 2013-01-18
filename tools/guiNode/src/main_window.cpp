/**
 * @file /src/main_window.cpp
 *
 * @brief DeltaRobotNode GUI
 * @author Eric Smekens
 * @author Thomas Cornelissen
 * @date December 2012
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/guiNode/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace guiNode {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
	ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    //QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
	setWindowIcon(QIcon(":/images/icon.png"));
	ui.tabWidget->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

	/*********************
	** Logging
	**********************/
	ui.view_logging->setModel(qnode.loggingModel());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));

	if ( !qnode.init() )
	{
		showNoMasterMessage();
	}
	else
	{
//		const QString text = QString("Started.");
//		ui.logBrowser->append(text);
	}
}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/
void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the deltaRobotNode!");
	msgBox.exec();
    close();
}

void MainWindow::on_manualPosButton_clicked(bool check )
{
	bool succeeded = qnode.moveAbsolute(ui.manualPosXSpin->value(), ui.manualPosYSpin->value(), ui.manualPosZSpin->value());
	if(!succeeded)
	{
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Input error");
		msg->setText("Coordinaten liggen buiten het werkveld.");
		msg->resize(190, 140);
		msg->show();
		msg->showNormal();
	}
}
void MainWindow::on_relativePosButton_clicked(bool check )
{
	bool succeeded = qnode.moveRelative(ui.relPosXSpin->value(), ui.relPosYSpin->value(), ui.relPosZSpin->value());
	if(!succeeded)
	{
		QMessageBox* msg = new QMessageBox(this->parentWidget());
		msg->setWindowTitle("Input error");
		msg->setText("Coordinaten liggen buiten het werkveld.");
		msg->resize(190, 140);
		msg->show();
		msg->showNormal();
	}
}
void MainWindow::on_calibrateButton_clicked(bool check )//On calibration
{
	qnode.calibrate();
}
void MainWindow::on_emergencyStopButton_clicked(bool check )
{
	qnode.emergencyStop();
}
void MainWindow::on_defineTCPButton_clicked(bool check )
{
	ui.applyTCPCheckBox->setChecked(true);
	qnode.sendTCP(ui.TCPXSpin->value(), ui.TCPYSpin->value(), ui.TCPZSpin->value() );
}
void MainWindow::on_applyTCPCheckBox_stateChanged(int state)
{
	if(state) //Checked
	{
		qnode.sendTCP(ui.TCPXSpin->value(), ui.TCPYSpin->value(), ui.TCPZSpin->value() );
	}
	else //Unchecked
	{
		qnode.sendTCP(0, 0, 0);//TODO: Te vervangen door aparte message?
	}
}


/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/
void MainWindow::updateLoggingView() {
	ui.view_logging->scrollToBottom();
}
/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "guiNode");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
}

void MainWindow::WriteSettings() {
    QSettings settings("Qt-Ros Package", "guiNode");
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
}

}  // namespace guiNode

