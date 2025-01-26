#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),timer(new QTimer(this))
{
    ui->setupUi(this);

    sym.Setup();
    connect(timer,SIGNAL(timeout()),this,SLOT(advance()));
    on_spinBox_valueChanged(ui->spinBox->value());

    on_ustawA_valueChanged(ui->ustawA->value());
    on_ustawP_valueChanged(ui->ustawP->value());
    on_ustawT_valueChanged(ui->ustawT->value());
    on_ustawKpid_valueChanged(ui->ustawKpid->value());
    on_ustawTi_valueChanged(ui->ustawTi->value());
    on_ustawTd_valueChanged(ui->ustawTd->value());
    on_ustawkarx_valueChanged(ui->ustawkarx->value());
    on_ustawA1_valueChanged(ui->ustawA1->value());
    on_ustawA2_valueChanged(ui->ustawA2->value());
    on_ustawA3_valueChanged(ui->ustawA3->value());
    on_ustawB1_valueChanged(ui->ustawB1->value());
    on_ustawB2_valueChanged(ui->ustawB2->value());
    on_ustawB3_valueChanged(ui->ustawB3->value());

    sig();

    ustawNazwy();

    dodajSerie();

    utworzOsie();

    ui->ChartUchyb->setChart(chart1);
    ui->Chartwartosci->setChart(chart2);
    ui->ChartSterowanie->setChart(chart3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    sig();
}

void MainWindow::sig()
{
    signal newsig;
    string text=ui->comboBox->currentText().toStdString();
    if(text=="Pros")newsig=signal::syg_prost;
    else if(text=="Sinusoida")newsig=signal::syg_sin;
    else newsig=signal::sk_jed;
    sym.set_syg(newsig);


}

void MainWindow::on_pushButton_4_clicked()
{
    sym.reset();
}


void MainWindow::on_pushButton_clicked()
{
    sym.StartStop();
    working=!working;
    if(!working)timer->stop();else timer->start();
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    timer->setInterval(arg1*1000);
}

void MainWindow::advance()
{
    if(sym.get_start()){
        sym.symulacja();

        dodacDoSerii();

        ustawMin();
        ustawMax();

        ustawZakres();

    }

}

void MainWindow::on_ustawA_valueChanged(double arg1)
{
    sym.set_zad(arg1);
}


void MainWindow::on_ustawP_valueChanged(double arg1)
{
    sym.set_p(arg1);
}


void MainWindow::on_ustawT_valueChanged(int arg1)
{
    sym.set_T(arg1);
}


void MainWindow::on_ustawKpid_valueChanged(double arg1)
{
    sym.set_pid_k(arg1);
}


void MainWindow::on_ustawTi_valueChanged(double arg1)
{
    sym.set_pid_Ti(arg1);
}


void MainWindow::on_ustawTd_valueChanged(double arg1)
{
    sym.set_pid_Td(arg1);
}


void MainWindow::on_ustawkarx_valueChanged(int arg1)
{
    sym.set_arx_k(arg1);
}


void MainWindow::on_ustawA1_valueChanged(double arg1)
{
    sym.set_a1(arg1);
}


void MainWindow::on_ustawB1_valueChanged(double arg1)
{
    sym.set_b1(arg1);
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    sym.change_Z();
}


void MainWindow::on_pushButton_3_clicked()
{
    if(working)on_pushButton_clicked();
    if(!working)timer->stop();
    sym.Setup();
    sym.reset();

    usunSerie();

    utworzSerie();

    ustawNazwy();

    resetMaksMin();

    dodajSerie();

    utworzOsie();


    ui->ChartUchyb->setChart(chart1);
    ui->Chartwartosci->setChart(chart2);
    ui->ChartSterowanie->setChart(chart3);
}


void MainWindow::on_ustawA2_valueChanged(double arg1)
{
    sym.set_a2(arg1);
}


void MainWindow::on_ustawA3_valueChanged(double arg1)
{
    sym.set_a3(arg1);
}


void MainWindow::on_ustawB2_valueChanged(double arg1)
{
    sym.set_b2(arg1);
}


void MainWindow::on_ustawB3_valueChanged(double arg1)
{
    sym.set_b3(arg1);
}

void MainWindow::dodajSerie()
{
    chart1->addSeries(series);
    chart2->addSeries(series2);
    chart2->addSeries(series3);
    chart3->addSeries(series4);
    chart3->addSeries(series5);
    chart3->addSeries(series6);
    chart3->addSeries(series7);
}
void MainWindow::usunSerie()
{
    delete series;
    delete series2;
    delete series3;
    delete series4;
    delete series5;
    delete series6;
    delete series7;
}

void MainWindow::utworzSerie()
{
    series = new QLineSeries();
    series2 = new QLineSeries();
    series3 = new QLineSeries();
    series4 = new QLineSeries();
    series5 = new QLineSeries();
    series6 = new QLineSeries();
    series7 = new QLineSeries();
}
void MainWindow::resetMaksMin()
{
    maks_y1=-1;
    maks_y2=0;
    maks_y3=0;
    min_y1=0;
    min_y2=0;
    min_y3=0;
}
void MainWindow::utworzOsie()
{
    chart1->createDefaultAxes();
    chart2->createDefaultAxes();
    chart3->createDefaultAxes();
}
void MainWindow::ustawNazwy()
{
    series->setName("Uchyb");
    series2->setName("Zadana");
    series3->setName("Regulowana");
    series4->setName("P");
    series5->setName("I");
    series6->setName("D");
    series7->setName("sterowanie");
}
void MainWindow::ustawZakres()
{
    chart1->axes(Qt::Horizontal).first()->setRange(0,sym.get_ite());
    chart1->axes(Qt::Vertical).first()->setRange(min_y1*2,maks_y1*2);
    chart2->axes(Qt::Vertical).first()->setRange(min_y2*2,maks_y2*2);
    chart2->axes(Qt::Horizontal).first()->setRange(0,sym.get_ite());
    chart3->axes(Qt::Horizontal).first()->setRange(0,sym.get_ite());
    chart3->axes(Qt::Vertical).first()->setRange(min_y3*2,maks_y3*2);
}
void MainWindow::dodacDoSerii()
{
    series->append(sym.get_ite(),sym.get_u());
    series2->append(sym.get_ite(),sym.get_Zad());
    series3->append(sym.get_ite(),sym.get_Y());
    series4->append(sym.get_ite(),sym.get_P());
    series5->append(sym.get_ite(),sym.get_I());
    series6->append(sym.get_ite(),sym.get_D());
    series7->append(sym.get_ite(),sym.get_ster());
}
void MainWindow::ustawMin()
{
    min_y1=min(sym.get_u(),min_y1);
    min_y2=min(sym.get_Zad(),min(min_y2,sym.get_Y()));
    min_y3=min(min(min(sym.get_P(),sym.get_I()),min(sym.get_D(),sym.get_ster())),min_y3);
}
void MainWindow::ustawMax()
{
    maks_y1=max(sym.get_u(),maks_y1);
    maks_y2=max(sym.get_Zad(),max(maks_y2,sym.get_Y()));
    maks_y3=max(max(max(sym.get_P(),sym.get_I()),max(sym.get_D(),sym.get_ster())),maks_y3);
}
