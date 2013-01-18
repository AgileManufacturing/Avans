/**
 * @file /src/main.cpp
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
#include <QApplication>

#include "../include/guiNode/main_window.hpp"

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {

    /*********************
    ** Qt
    **********************/
    QApplication app(argc, argv);
    guiNode::MainWindow w(argc,argv);
    w.show();

    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

	return result;
}
