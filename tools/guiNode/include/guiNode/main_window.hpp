/**
 * @file /include/guiNode/main_window.hpp
 *
 * @brief Qt based gui for guiNode.
 * @author Eric Smekens
 * @author Thomas Cornelissen
 * @date December 2012
 **/
#ifndef guiNode_MAIN_WINDOW_H
#define guiNode_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui/QMainWindow>
#include "../ui/ui_main_window.h"
#include "../include/guiNode/qnode.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace guiNode {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

	void ReadSettings(); // Load up qt program settings at startup
	void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();

public slots:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
	void on_manualPosButton_clicked(bool check );
	void on_relativePosButton_clicked(bool check );
	void on_calibrateButton_clicked(bool check );
	void on_emergencyStopButton_clicked(bool check );
	void on_defineTCPButton_clicked(bool check );
	void on_applyTCPCheckBox_stateChanged(int state);

//    /******************************************
//    ** Manual connections
//    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically

private:
	Ui_MainWindowDesign ui;
	QNode qnode;
};

}  // namespace guiNode

#endif // guiNode_MAIN_WINDOW_H
