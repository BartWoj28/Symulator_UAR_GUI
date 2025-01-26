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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpinBox *spinBox;
    QLabel *label_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_12;
    QLabel *label;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_3;
    QDoubleSpinBox *ustawA;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QDoubleSpinBox *ustawP;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QSpinBox *ustawT;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QComboBox *comboBox;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_10;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QDoubleSpinBox *ustawKpid;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QDoubleSpinBox *ustawTi;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *ustawTd;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QSpinBox *ustawkarx;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *ustawA1;
    QDoubleSpinBox *ustawA2;
    QDoubleSpinBox *ustawA3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *ustawB1;
    QDoubleSpinBox *ustawB2;
    QDoubleSpinBox *ustawB3;
    QVBoxLayout *verticalLayout;
    QChartView *ChartUchyb;
    QChartView *Chartwartosci;
    QChartView *ChartSterowanie;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1189, 668);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_9 = new QHBoxLayout(centralwidget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(3);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_8->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_8->addWidget(pushButton_3);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setValue(1);

        horizontalLayout_8->addWidget(spinBox);


        verticalLayout_16->addLayout(horizontalLayout_8);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_16->addWidget(label_2);


        verticalLayout_15->addLayout(verticalLayout_16);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(3, 3, 3, 3);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout_12->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(9);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_3);

        ustawA = new QDoubleSpinBox(frame);
        ustawA->setObjectName("ustawA");
        ustawA->setDecimals(3);
        ustawA->setMinimum(-99.000000000000000);
        ustawA->setSingleStep(0.500000000000000);
        ustawA->setValue(1.000000000000000);

        verticalLayout_11->addWidget(ustawA);


        gridLayout->addLayout(verticalLayout_11, 0, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_4);

        ustawP = new QDoubleSpinBox(frame);
        ustawP->setObjectName("ustawP");
        ustawP->setMaximum(1.000000000000000);
        ustawP->setSingleStep(0.100000000000000);
        ustawP->setValue(0.500000000000000);

        verticalLayout_10->addWidget(ustawP);


        gridLayout->addLayout(verticalLayout_10, 0, 1, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_5);

        ustawT = new QSpinBox(frame);
        ustawT->setObjectName("ustawT");
        ustawT->setMinimum(1);
        ustawT->setValue(1);

        verticalLayout_9->addWidget(ustawT);


        gridLayout->addLayout(verticalLayout_9, 1, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_6);

        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_8->addWidget(comboBox);


        gridLayout->addLayout(verticalLayout_8, 1, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 4);

        horizontalLayout_7->addLayout(verticalLayout_12);


        verticalLayout_15->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        verticalLayout_13->addWidget(label_10);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_11);

        ustawKpid = new QDoubleSpinBox(frame_2);
        ustawKpid->setObjectName("ustawKpid");
        ustawKpid->setSingleStep(0.500000000000000);
        ustawKpid->setValue(0.500000000000000);

        verticalLayout_7->addWidget(ustawKpid);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_8);

        ustawTi = new QDoubleSpinBox(frame_2);
        ustawTi->setObjectName("ustawTi");
        ustawTi->setSingleStep(0.500000000000000);
        ustawTi->setValue(5.000000000000000);

        verticalLayout_5->addWidget(ustawTi);


        gridLayout_2->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_7);

        ustawTd = new QDoubleSpinBox(frame_2);
        ustawTd->setObjectName("ustawTd");
        ustawTd->setSingleStep(0.500000000000000);
        ustawTd->setValue(0.200000000000000);

        verticalLayout_6->addWidget(ustawTd);


        gridLayout_2->addLayout(verticalLayout_6, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_4->addWidget(pushButton_4);


        gridLayout_2->addLayout(verticalLayout_4, 1, 1, 1, 1);


        verticalLayout_13->addLayout(gridLayout_2);

        verticalLayout_13->setStretch(1, 4);

        gridLayout_3->addLayout(verticalLayout_13, 0, 0, 1, 1);


        verticalLayout_15->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(3, 3, 3, 3);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_14 = new QLabel(frame_3);
        label_14->setObjectName("label_14");

        verticalLayout_14->addWidget(label_14);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_16 = new QLabel(frame_3);
        label_16->setObjectName("label_16");

        horizontalLayout_3->addWidget(label_16);

        ustawkarx = new QSpinBox(frame_3);
        ustawkarx->setObjectName("ustawkarx");
        ustawkarx->setMinimum(1);
        ustawkarx->setValue(1);

        horizontalLayout_3->addWidget(ustawkarx);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        checkBox = new QCheckBox(frame_3);
        checkBox->setObjectName("checkBox");
        checkBox->setTristate(false);

        horizontalLayout_6->addWidget(checkBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 2);
        horizontalLayout_6->setStretch(3, 2);
        horizontalLayout_6->setStretch(4, 1);

        verticalLayout_14->addLayout(horizontalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");

        horizontalLayout_4->addWidget(label_12);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ustawA1 = new QDoubleSpinBox(frame_3);
        ustawA1->setObjectName("ustawA1");
        ustawA1->setMinimum(-99.000000000000000);
        ustawA1->setSingleStep(0.500000000000000);
        ustawA1->setValue(-0.400000000000000);

        horizontalLayout->addWidget(ustawA1);

        ustawA2 = new QDoubleSpinBox(frame_3);
        ustawA2->setObjectName("ustawA2");
        ustawA2->setMinimum(-99.000000000000000);
        ustawA2->setSingleStep(0.500000000000000);

        horizontalLayout->addWidget(ustawA2);

        ustawA3 = new QDoubleSpinBox(frame_3);
        ustawA3->setObjectName("ustawA3");
        ustawA3->setMinimum(-99.000000000000000);
        ustawA3->setMaximum(99.989999999999995);
        ustawA3->setSingleStep(0.500000000000000);
        ustawA3->setValue(0.000000000000000);

        horizontalLayout->addWidget(ustawA3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_14->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");

        horizontalLayout_5->addWidget(label_15);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ustawB1 = new QDoubleSpinBox(frame_3);
        ustawB1->setObjectName("ustawB1");
        ustawB1->setMinimum(-99.000000000000000);
        ustawB1->setSingleStep(0.500000000000000);
        ustawB1->setValue(0.600000000000000);

        horizontalLayout_2->addWidget(ustawB1);

        ustawB2 = new QDoubleSpinBox(frame_3);
        ustawB2->setObjectName("ustawB2");
        ustawB2->setMinimum(-99.000000000000000);
        ustawB2->setSingleStep(0.500000000000000);

        horizontalLayout_2->addWidget(ustawB2);

        ustawB3 = new QDoubleSpinBox(frame_3);
        ustawB3->setObjectName("ustawB3");
        ustawB3->setMinimum(-99.000000000000000);
        ustawB3->setSingleStep(0.500000000000000);

        horizontalLayout_2->addWidget(ustawB3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_14->addLayout(verticalLayout_3);


        gridLayout_4->addLayout(verticalLayout_14, 0, 0, 1, 1);


        verticalLayout_15->addWidget(frame_3);

        verticalLayout_15->setStretch(1, 6);
        verticalLayout_15->setStretch(2, 6);
        verticalLayout_15->setStretch(3, 6);

        horizontalLayout_9->addLayout(verticalLayout_15);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        ChartUchyb = new QChartView(centralwidget);
        ChartUchyb->setObjectName("ChartUchyb");

        verticalLayout->addWidget(ChartUchyb);

        Chartwartosci = new QChartView(centralwidget);
        Chartwartosci->setObjectName("Chartwartosci");

        verticalLayout->addWidget(Chartwartosci);

        ChartSterowanie = new QChartView(centralwidget);
        ChartSterowanie->setObjectName("ChartSterowanie");

        verticalLayout->addWidget(ChartSterowanie);


        horizontalLayout_9->addLayout(verticalLayout);

        horizontalLayout_9->setStretch(0, 2);
        horizontalLayout_9->setStretch(1, 7);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1189, 25));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Generator", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Sygna\305\202", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Skok", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Pros", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Sinusoida", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "PID", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ti", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Td", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Pami\304\231\304\207", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "ARX", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "k", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
