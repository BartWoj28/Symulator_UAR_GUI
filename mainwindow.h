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
#include "dialog_arx.h"


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

    void on_pushButton_3_clicked();


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

    void on_pushButton_2_clicked();

    void usun_charty();

    void on_Spbox_inter_valueChanged(double arg1);

    void Pobiezdane_ARX();

    void ZakresWykresu(double &y, QLineSeries * &seria, bool=true);

    void on_checkBox_stateChanged(int arg1);

    void on_Spbox_Stala_valueChanged(double arg1);

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
    Dialog_ARX* edit_ARX=new Dialog_ARX;
    int x=0;
    double czas=0.0;
};
#endif // MAINWINDOW_H
