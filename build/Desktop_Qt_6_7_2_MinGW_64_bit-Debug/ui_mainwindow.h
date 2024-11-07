/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *workArea;
    QPushButton *showAxis;
    QPushButton *gridlines;
    QSpinBox *gridOffset;
    QLabel *label_3;
    QLineEdit *BrushColor;
    QPushButton *zoomIn;
    QPushButton *zoomOut;
    QPushButton *setUnitDistance;
    QPushButton *genClr;
    QSpinBox *polygonSideCount;
    QPushButton *DrawPolygon;
    QPushButton *FloodFill;
    QPushButton *GenBg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1539, 1163);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        workArea = new QLabel(centralwidget);
        workArea->setObjectName("workArea");
        workArea->setGeometry(QRect(40, 60, 1461, 701));
        workArea->setFrameShape(QFrame::Shape::Box);
        showAxis = new QPushButton(centralwidget);
        showAxis->setObjectName("showAxis");
        showAxis->setGeometry(QRect(1440, 20, 83, 29));
        gridlines = new QPushButton(centralwidget);
        gridlines->setObjectName("gridlines");
        gridlines->setGeometry(QRect(1310, 20, 111, 29));
        gridOffset = new QSpinBox(centralwidget);
        gridOffset->setObjectName("gridOffset");
        gridOffset->setGeometry(QRect(1220, 20, 81, 29));
        gridOffset->setMinimum(0);
        gridOffset->setSingleStep(10);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1110, 30, 81, 20));
        BrushColor = new QLineEdit(centralwidget);
        BrushColor->setObjectName("BrushColor");
        BrushColor->setGeometry(QRect(10, 10, 113, 26));
        zoomIn = new QPushButton(centralwidget);
        zoomIn->setObjectName("zoomIn");
        zoomIn->setGeometry(QRect(350, 10, 31, 29));
        zoomOut = new QPushButton(centralwidget);
        zoomOut->setObjectName("zoomOut");
        zoomOut->setGeometry(QRect(390, 10, 31, 29));
        setUnitDistance = new QPushButton(centralwidget);
        setUnitDistance->setObjectName("setUnitDistance");
        setUnitDistance->setGeometry(QRect(140, 10, 93, 29));
        genClr = new QPushButton(centralwidget);
        genClr->setObjectName("genClr");
        genClr->setGeometry(QRect(250, 10, 93, 29));
        polygonSideCount = new QSpinBox(centralwidget);
        polygonSideCount->setObjectName("polygonSideCount");
        polygonSideCount->setGeometry(QRect(440, 10, 42, 26));
        DrawPolygon = new QPushButton(centralwidget);
        DrawPolygon->setObjectName("DrawPolygon");
        DrawPolygon->setGeometry(QRect(540, 10, 93, 29));
        FloodFill = new QPushButton(centralwidget);
        FloodFill->setObjectName("FloodFill");
        FloodFill->setGeometry(QRect(650, 10, 93, 29));
        GenBg = new QPushButton(centralwidget);
        GenBg->setObjectName("GenBg");
        GenBg->setGeometry(QRect(760, 10, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1539, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        workArea->setText(QString());
        showAxis->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        gridlines->setText(QCoreApplication::translate("MainWindow", "Show Gridlines", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "GridOffset", nullptr));
        zoomIn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        zoomOut->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        setUnitDistance->setText(QCoreApplication::translate("MainWindow", "Set Unit Size", nullptr));
        genClr->setText(QCoreApplication::translate("MainWindow", "GenClr", nullptr));
        DrawPolygon->setText(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        FloodFill->setText(QCoreApplication::translate("MainWindow", "Fill", nullptr));
        GenBg->setText(QCoreApplication::translate("MainWindow", "GenBg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
