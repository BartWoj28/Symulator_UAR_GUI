/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *spinBox;
    QDoubleSpinBox *ustawA;
    QDoubleSpinBox *ustawP;
    QSpinBox *ustawT;
    QDoubleSpinBox *ustawKpid;
    QDoubleSpinBox *ustawTi;
    QDoubleSpinBox *ustawTd;
    QSpinBox *ustawkarx;
    QDoubleSpinBox *ustawA1;
    QDoubleSpinBox *ustawB1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QChartView *ChartUchyb;
    QChartView *Chartwartosci;
    QChartView *ChartSterowanie;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1246, 708);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 10, 83, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 10, 83, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 10, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 63, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 110, 63, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 180, 21, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(170, 210, 111, 28));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 180, 63, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 350, 63, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(180, 280, 21, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 350, 41, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 250, 81, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 280, 21, 20));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(180, 380, 83, 29));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(200, 440, 63, 20));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 420, 81, 20));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(40, 510, 63, 20));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 440, 63, 20));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(190, 10, 48, 29));
        spinBox->setMinimum(1);
        spinBox->setValue(1);
        ustawA = new QDoubleSpinBox(centralwidget);
        ustawA->setObjectName("ustawA");
        ustawA->setGeometry(QRect(20, 130, 67, 29));
        ustawA->setDecimals(3);
        ustawA->setSingleStep(0.500000000000000);
        ustawA->setValue(1.000000000000000);
        ustawP = new QDoubleSpinBox(centralwidget);
        ustawP->setObjectName("ustawP");
        ustawP->setGeometry(QRect(170, 130, 67, 29));
        ustawP->setMaximum(1.000000000000000);
        ustawP->setSingleStep(0.500000000000000);
        ustawP->setValue(0.500000000000000);
        ustawT = new QSpinBox(centralwidget);
        ustawT->setObjectName("ustawT");
        ustawT->setGeometry(QRect(30, 200, 48, 29));
        ustawT->setValue(1);
        ustawKpid = new QDoubleSpinBox(centralwidget);
        ustawKpid->setObjectName("ustawKpid");
        ustawKpid->setGeometry(QRect(20, 300, 67, 29));
        ustawKpid->setSingleStep(0.500000000000000);
        ustawKpid->setValue(0.500000000000000);
        ustawTi = new QDoubleSpinBox(centralwidget);
        ustawTi->setObjectName("ustawTi");
        ustawTi->setGeometry(QRect(170, 300, 67, 29));
        ustawTi->setSingleStep(0.500000000000000);
        ustawTi->setValue(5.000000000000000);
        ustawTd = new QDoubleSpinBox(centralwidget);
        ustawTd->setObjectName("ustawTd");
        ustawTd->setGeometry(QRect(20, 370, 67, 29));
        ustawTd->setSingleStep(0.500000000000000);
        ustawTd->setValue(0.200000000000000);
        ustawkarx = new QSpinBox(centralwidget);
        ustawkarx->setObjectName("ustawkarx");
        ustawkarx->setGeometry(QRect(20, 470, 48, 29));
        ustawkarx->setMinimum(1);
        ustawkarx->setValue(1);
        ustawA1 = new QDoubleSpinBox(centralwidget);
        ustawA1->setObjectName("ustawA1");
        ustawA1->setGeometry(QRect(170, 470, 67, 29));
        ustawA1->setMinimum(-99.000000000000000);
        ustawA1->setSingleStep(0.500000000000000);
        ustawA1->setValue(-0.400000000000000);
        ustawB1 = new QDoubleSpinBox(centralwidget);
        ustawB1->setObjectName("ustawB1");
        ustawB1->setGeometry(QRect(10, 540, 67, 29));
        ustawB1->setMinimum(-99.000000000000000);
        ustawB1->setSingleStep(0.500000000000000);
        ustawB1->setValue(0.600000000000000);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(500, 0, 741, 671));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ChartUchyb = new QChartView(layoutWidget);
        ChartUchyb->setObjectName("ChartUchyb");

        verticalLayout->addWidget(ChartUchyb);

        Chartwartosci = new QChartView(layoutWidget);
        Chartwartosci->setObjectName("Chartwartosci");

        verticalLayout->addWidget(Chartwartosci);

        ChartSterowanie = new QChartView(layoutWidget);
        ChartSterowanie->setObjectName("ChartSterowanie");

        verticalLayout->addWidget(ChartSterowanie);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(200, 540, 41, 26));
        checkBox->setTristate(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1246, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SUAR", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start/Stop", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Generator", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Skok", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Pros", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Sinusoida", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Sygna\305\202", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Td", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ti", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "PID", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "ARX", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "k", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
