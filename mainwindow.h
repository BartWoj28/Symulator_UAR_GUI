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



    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_3_clicked();

    void on_ustawA2_valueChanged(double arg1);

    void on_ustawA3_valueChanged(double arg1);

    void on_ustawB2_valueChanged(double arg1);

    void on_ustawB3_valueChanged(double arg1);

    void dodajSerie();

    void resetMaksMin();

    void usunSerie();

    void utworzSerie();

    void utworzOsie();

    void ustawNazwy();

    void ustawZakres();

    void dodacDoSerii();

    void ustawMin();

    void ustawMax();

private:
    Ui::MainWindow *ui;
    Symulator sym;
    int inter;
    friend Symulator;
    void sig();

    QChart* chart1=new QChart();
    QChart* chart2=new QChart();
    QChart* chart3=new QChart();

    QLineSeries* series = new QLineSeries();
    QLineSeries* series2 = new QLineSeries();
    QLineSeries* series3 = new QLineSeries();
    QLineSeries* series4 = new QLineSeries();
    QLineSeries* series5 = new QLineSeries();
    QLineSeries* series6 = new QLineSeries();
    QLineSeries* series7 = new QLineSeries();


    bool working=false;
    QTimer* timer=nullptr;
    double maks_y1=-1;
    double maks_y2=-1;
    double maks_y3=-1;
    double min_y1=0;
    double min_y2=0;
    double min_y3=0;
};
#endif // MAINWINDOW_H
