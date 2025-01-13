#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qtcharts>
#include "symulator.h"
#include <QTimer>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void advance();

    void on_spinBox_valueChanged(int arg1);

    void on_ustawA_valueChanged(double arg1);

    void on_ustawP_valueChanged(double arg1);

    void on_ustawT_valueChanged(int arg1);

    void on_ustawKpid_valueChanged(double arg1);

    void on_ustawTi_valueChanged(double arg1);

    void on_ustawTd_valueChanged(double arg1);

    void on_ustawkarx_valueChanged(int arg1);

    void on_ustawA1_valueChanged(double arg1);

    void on_ustawB1_valueChanged(double arg1);

    void on_pushButton_2_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    Symulator sym;
    int inter;
    friend Symulator;
    void sig();

    QChart* chart1=new QChart();
    QChart* chart2=new QChart();
    QChart* chart3=new QChart();

    QSplineSeries* series = new QSplineSeries();
    QSplineSeries* series2 = new QSplineSeries();
    QSplineSeries* series3 = new QSplineSeries();
    QSplineSeries* series4 = new QSplineSeries();
    QSplineSeries* series5 = new QSplineSeries();
    QSplineSeries* series6 = new QSplineSeries();
    QSplineSeries* series7 = new QSplineSeries();


    bool working=false;
    QTimer* timer=nullptr;
    int maks_y1=-1;
    int maks_y2=-1;
    double maks_y3=-1;
};
#endif // MAINWINDOW_H
