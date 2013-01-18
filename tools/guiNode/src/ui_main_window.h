/********************************************************************************
** Form generated from reading UI file 'main_windowju2856.ui'
**
** Created: Fri Dec 7 13:19:52 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_WINDOWJU2856_H
#define MAIN_WINDOWJU2856_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QTabWidget *tabWidget;
    QWidget *commandTab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *manualPosBox;
    QPushButton *manualPosButton;
    QSplitter *splitter;
    QLabel *label;
    QSpinBox *manualPosXSpin;
    QSplitter *splitter_2;
    QLabel *label_2;
    QSpinBox *manualPosYSpin;
    QSplitter *splitter_3;
    QLabel *label_3;
    QSpinBox *manualPosZSpin;
    QCheckBox *applyTCPCheckBox;
    QPushButton *calibrateButton;
    QPushButton *emergencyStopButton;
    QGroupBox *relativePosBox;
    QPushButton *relativePosButton;
    QSplitter *splitter_6;
    QLabel *label_4;
    QSpinBox *relPosXSpin;
    QSplitter *splitter_4;
    QLabel *label_6;
    QSpinBox *relPosZSpin;
    QSplitter *splitter_5;
    QLabel *label_5;
    QSpinBox *relPosYSpin;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout2;
    QGroupBox *graphicsBox;
    QFrame *frame;
    QLabel *label_7;
    QWidget *logTab;
    QTextBrowser *logBrowser;
    QWidget *settingsTab;
    QGroupBox *manualPosBox_2;
    QPushButton *defineTCPButton;
    QSplitter *splitter_7;
    QLabel *label_8;
    QSpinBox *TCPXSpin;
    QSplitter *splitter_8;
    QLabel *label_9;
    QSpinBox *TCPYSpin;
    QSplitter *splitter_9;
    QLabel *label_10;
    QSpinBox *TCPZSpin;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(752, 643);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowDesign->sizePolicy().hasHeightForWidth());
        MainWindowDesign->setSizePolicy(sizePolicy);
        MainWindowDesign->setMinimumSize(QSize(752, 643));
        MainWindowDesign->setMaximumSize(QSize(752, 643));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        commandTab = new QWidget();
        commandTab->setObjectName(QString::fromUtf8("commandTab"));
        layoutWidget = new QWidget(commandTab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 186, 561));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        manualPosBox = new QGroupBox(layoutWidget);
        manualPosBox->setObjectName(QString::fromUtf8("manualPosBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(manualPosBox->sizePolicy().hasHeightForWidth());
        manualPosBox->setSizePolicy(sizePolicy1);
        manualPosBox->setMinimumSize(QSize(50, 50));
        manualPosBox->setLayoutDirection(Qt::LeftToRight);
        manualPosBox->setAutoFillBackground(false);
        manualPosBox->setStyleSheet(QString::fromUtf8(""));
        manualPosBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        manualPosBox->setFlat(false);
        manualPosBox->setCheckable(false);
        manualPosButton = new QPushButton(manualPosBox);
        manualPosButton->setObjectName(QString::fromUtf8("manualPosButton"));
        manualPosButton->setGeometry(QRect(10, 150, 81, 27));
        sizePolicy.setHeightForWidth(manualPosButton->sizePolicy().hasHeightForWidth());
        manualPosButton->setSizePolicy(sizePolicy);
        splitter = new QSplitter(manualPosBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 30, 80, 27));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        manualPosXSpin = new QSpinBox(splitter);
        manualPosXSpin->setObjectName(QString::fromUtf8("manualPosXSpin"));
        manualPosXSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        manualPosXSpin->setMinimum(-99);
        splitter->addWidget(manualPosXSpin);
        splitter_2 = new QSplitter(manualPosBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(10, 70, 80, 27));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        manualPosYSpin = new QSpinBox(splitter_2);
        manualPosYSpin->setObjectName(QString::fromUtf8("manualPosYSpin"));
        manualPosYSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        manualPosYSpin->setMinimum(-99);
        splitter_2->addWidget(manualPosYSpin);
        splitter_3 = new QSplitter(manualPosBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(10, 110, 80, 27));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_3->addWidget(label_3);
        manualPosZSpin = new QSpinBox(splitter_3);
        manualPosZSpin->setObjectName(QString::fromUtf8("manualPosZSpin"));
        manualPosZSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        manualPosZSpin->setMinimum(-99);
        splitter_3->addWidget(manualPosZSpin);
        applyTCPCheckBox = new QCheckBox(manualPosBox);
        applyTCPCheckBox->setObjectName(QString::fromUtf8("applyTCPCheckBox"));
        applyTCPCheckBox->setGeometry(QRect(10, 190, 151, 22));
        splitter->raise();
        splitter_2->raise();
        splitter_3->raise();
        manualPosButton->raise();
        applyTCPCheckBox->raise();

        gridLayout->addWidget(manualPosBox, 1, 0, 1, 1);

        calibrateButton = new QPushButton(layoutWidget);
        calibrateButton->setObjectName(QString::fromUtf8("calibrateButton"));

        gridLayout->addWidget(calibrateButton, 3, 0, 1, 1);

        emergencyStopButton = new QPushButton(layoutWidget);
        emergencyStopButton->setObjectName(QString::fromUtf8("emergencyStopButton"));
        QPalette palette;
        QBrush brush(QColor(255, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        emergencyStopButton->setPalette(palette);
        emergencyStopButton->setAutoFillBackground(false);
        emergencyStopButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"border-color: rgb(255, 255, 0);\n"
"alternate-background-color: rgb(255, 255, 0);\n"
"selection-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(emergencyStopButton, 4, 0, 1, 1);

        relativePosBox = new QGroupBox(layoutWidget);
        relativePosBox->setObjectName(QString::fromUtf8("relativePosBox"));
        relativePosButton = new QPushButton(relativePosBox);
        relativePosButton->setObjectName(QString::fromUtf8("relativePosButton"));
        relativePosButton->setGeometry(QRect(10, 150, 85, 27));
        splitter_6 = new QSplitter(relativePosBox);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setGeometry(QRect(10, 30, 80, 27));
        splitter_6->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter_6->addWidget(label_4);
        relPosXSpin = new QSpinBox(splitter_6);
        relPosXSpin->setObjectName(QString::fromUtf8("relPosXSpin"));
        relPosXSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        relPosXSpin->setMinimum(-99);
        splitter_6->addWidget(relPosXSpin);
        splitter_4 = new QSplitter(relativePosBox);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(10, 110, 80, 27));
        splitter_4->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        splitter_4->addWidget(label_6);
        relPosZSpin = new QSpinBox(splitter_4);
        relPosZSpin->setObjectName(QString::fromUtf8("relPosZSpin"));
        relPosZSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        relPosZSpin->setMinimum(-99);
        splitter_4->addWidget(relPosZSpin);
        splitter_5 = new QSplitter(relativePosBox);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setGeometry(QRect(10, 70, 80, 27));
        splitter_5->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_5->addWidget(label_5);
        relPosYSpin = new QSpinBox(splitter_5);
        relPosYSpin->setObjectName(QString::fromUtf8("relPosYSpin"));
        relPosYSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        relPosYSpin->setMinimum(-99);
        splitter_5->addWidget(relPosYSpin);
        splitter_6->raise();
        splitter_4->raise();
        splitter_5->raise();
        relativePosButton->raise();

        gridLayout->addWidget(relativePosBox, 2, 0, 1, 1);

        gridLayoutWidget = new QWidget(commandTab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(210, 0, 511, 576));
        gridLayout2 = new QGridLayout(gridLayoutWidget);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        graphicsBox = new QGroupBox(gridLayoutWidget);
        graphicsBox->setObjectName(QString::fromUtf8("graphicsBox"));
        frame = new QFrame(graphicsBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(9, 19, 481, 501));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(graphicsBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 520, 251, 51));

        gridLayout2->addWidget(graphicsBox, 0, 0, 1, 1);

        tabWidget->addTab(commandTab, QString());
        logTab = new QWidget();
        logTab->setObjectName(QString::fromUtf8("logTab"));
        logBrowser = new QTextBrowser(logTab);
        logBrowser->setObjectName(QString::fromUtf8("logBrowser"));
        logBrowser->setGeometry(QRect(0, 10, 721, 581));
        tabWidget->addTab(logTab, QString());
        settingsTab = new QWidget();
        settingsTab->setObjectName(QString::fromUtf8("settingsTab"));
        manualPosBox_2 = new QGroupBox(settingsTab);
        manualPosBox_2->setObjectName(QString::fromUtf8("manualPosBox_2"));
        manualPosBox_2->setGeometry(QRect(10, 10, 184, 227));
        sizePolicy1.setHeightForWidth(manualPosBox_2->sizePolicy().hasHeightForWidth());
        manualPosBox_2->setSizePolicy(sizePolicy1);
        manualPosBox_2->setMinimumSize(QSize(50, 50));
        manualPosBox_2->setLayoutDirection(Qt::LeftToRight);
        manualPosBox_2->setAutoFillBackground(false);
        manualPosBox_2->setStyleSheet(QString::fromUtf8(""));
        manualPosBox_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        manualPosBox_2->setFlat(false);
        manualPosBox_2->setCheckable(false);
        defineTCPButton = new QPushButton(manualPosBox_2);
        defineTCPButton->setObjectName(QString::fromUtf8("defineTCPButton"));
        defineTCPButton->setGeometry(QRect(10, 150, 81, 27));
        sizePolicy.setHeightForWidth(defineTCPButton->sizePolicy().hasHeightForWidth());
        defineTCPButton->setSizePolicy(sizePolicy);
        splitter_7 = new QSplitter(manualPosBox_2);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setGeometry(QRect(10, 30, 80, 27));
        splitter_7->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        splitter_7->addWidget(label_8);
        TCPXSpin = new QSpinBox(splitter_7);
        TCPXSpin->setObjectName(QString::fromUtf8("TCPXSpin"));
        TCPXSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        TCPXSpin->setMinimum(-99);
        splitter_7->addWidget(TCPXSpin);
        splitter_8 = new QSplitter(manualPosBox_2);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setGeometry(QRect(10, 70, 80, 27));
        splitter_8->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        splitter_8->addWidget(label_9);
        TCPYSpin = new QSpinBox(splitter_8);
        TCPYSpin->setObjectName(QString::fromUtf8("TCPYSpin"));
        TCPYSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        TCPYSpin->setMinimum(-99);
        splitter_8->addWidget(TCPYSpin);
        splitter_9 = new QSplitter(manualPosBox_2);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setGeometry(QRect(10, 110, 80, 27));
        splitter_9->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(splitter_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        splitter_9->addWidget(label_10);
        TCPZSpin = new QSpinBox(splitter_9);
        TCPZSpin->setObjectName(QString::fromUtf8("TCPZSpin"));
        TCPZSpin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        TCPZSpin->setMinimum(-99);
        splitter_9->addWidget(TCPZSpin);
        tabWidget->addTab(settingsTab, QString());

        hboxLayout->addWidget(tabWidget);

        MainWindowDesign->setCentralWidget(centralwidget);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "DeltaRobot", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
        manualPosBox->setTitle(QApplication::translate("MainWindowDesign", "Manual Position", 0, QApplication::UnicodeUTF8));
        manualPosButton->setText(QApplication::translate("MainWindowDesign", "Move", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowDesign", "X", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowDesign", "Y", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowDesign", "Z", 0, QApplication::UnicodeUTF8));
        applyTCPCheckBox->setText(QApplication::translate("MainWindowDesign", "Apply TCP Offset", 0, QApplication::UnicodeUTF8));
        calibrateButton->setText(QApplication::translate("MainWindowDesign", "Calibrate", 0, QApplication::UnicodeUTF8));
        emergencyStopButton->setText(QApplication::translate("MainWindowDesign", "STOP", 0, QApplication::UnicodeUTF8));
        relativePosBox->setTitle(QApplication::translate("MainWindowDesign", "Relative Position", 0, QApplication::UnicodeUTF8));
        relativePosButton->setText(QApplication::translate("MainWindowDesign", "Move", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "X", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowDesign", "Z", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowDesign", "Y", 0, QApplication::UnicodeUTF8));
        relPosYSpin->setSuffix(QString());
        graphicsBox->setTitle(QApplication::translate("MainWindowDesign", "Visualisatie", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindowDesign", "Robot status:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(commandTab), QApplication::translate("MainWindowDesign", "Command", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(logTab), QApplication::translate("MainWindowDesign", "Log", 0, QApplication::UnicodeUTF8));
        manualPosBox_2->setTitle(QApplication::translate("MainWindowDesign", "TCP Offset", 0, QApplication::UnicodeUTF8));
        defineTCPButton->setText(QApplication::translate("MainWindowDesign", "Define TCP", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowDesign", "X", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowDesign", "Y", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowDesign", "Z", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(settingsTab), QApplication::translate("MainWindowDesign", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_WINDOWJU2856_H
