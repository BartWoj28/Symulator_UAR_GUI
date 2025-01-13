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
    on_ustawB1_valueChanged(ui->ustawB1->value());

    sig();

    series->setName("Uchyb");
    series2->setName("Zadana");
    series3->setName("Regulowana");
    series4->setName("P");
    series5->setName("I");
    series6->setName("D");
    series7->setName("sterowanie");

    chart1->addSeries(series);
    chart2->addSeries(series2);
    chart2->addSeries(series3);
    chart3->addSeries(series4);
    chart3->addSeries(series5);
    chart3->addSeries(series6);
    chart3->addSeries(series7);

    chart1->createDefaultAxes();
    chart2->createDefaultAxes();
    chart3->createDefaultAxes();

    ui->ChartUchyb->setChart(chart1);
    ui->Chartwartosci->setChart(chart2);
    ui->ChartSterowanie->setChart(chart3);
    //timer->start();
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
    if(working)timer->stop();else timer->start();
    sym.StartStop();

}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    timer->setInterval(arg1*1000);
}

void MainWindow::advance()
{
        if(sym.get_start()){
            sym.symulacja();

            //chart1

            series->append(sym.get_ite(),sym.get_u());
            //chart1->legend()->hide();
            //chart1->addSeries(series);
            //chart1->createDefaultAxes();
            if(sym.get_u()>maks_y1) maks_y1=sym.get_u();
            chart1->axes(Qt::Horizontal).first()->setRange(0,sym.get_ite());
            chart1->axes(Qt::Vertical).first()->setRange(0,maks_y1*1.5);
            ui->ChartUchyb->setChart(chart1);

            //chart2
            series2->append(sym.get_ite(),sym.get_Zad());
            series3->append(sym.get_ite(),sym.get_Y());
            //chart2->legend()->hide();
            //chart2->addSeries(series2);
            //chart2->createDefaultAxes();
            //chart2->addSeries(series3);
            //chart2->createDefaultAxes();
            chart2->axes(Qt::Horizontal).first()->setRange(0,sym.get_ite());
            if(sym.get_Zad()>maks_y2 && sym.get_Zad()>=sym.get_Y())maks_y2=sym.get_Zad();
            else if(sym.get_Y()>=maks_y2) maks_y2=sym.get_Y();
            chart2->axes(Qt::Vertical).first()->setRange(0,maks_y2*1.5);
            ui->Chartwartosci->setChart(chart2);
            //ui->graphicsView_2->setRenderHint(QPainter::Antialiasing);
            //ui->graphicsView_2->setVisible(true);

            //chart3
            series4->append(sym.get_ite(),sym.get_P());
            series5->append(sym.get_ite(),sym.get_I());
            series6->append(sym.get_ite(),sym.get_D());
            series7->append(sym.get_ite(),sym.get_ster());
            //chart3->legend()->hide();
            // chart3->addSeries(series4);
            //chart3->createDefaultAxes();
            //chart3->addSeries(series5);
            //chart3->createDefaultAxes();
            //chart3->addSeries(series6);
            //chart3->createDefaultAxes();
            //chart3->addSeries(series7);
            //chart3->createDefaultAxes();
            if(sym.get_P()>=sym.get_I()&&sym.get_P()>=sym.get_D()&&sym.get_ster()<=sym.get_P()&&sym.get_P()>=maks_y3)maks_y3=sym.get_P();
            else if(sym.get_I()>=sym.get_D()&&sym.get_I()>=sym.get_ster()&&sym.get_I()>=maks_y3)maks_y3=sym.get_I();
            else if(sym.get_D()>=sym.get_ster()&&sym.get_D()>=maks_y3)maks_y3=sym.get_D();
            else if(sym.get_ster()>=maks_y3) maks_y3=sym.get_ster();
            chart3->axes(Qt::Horizontal).first()->setRange(0,sym.get_ite());
            chart3->axes(Qt::Vertical).first()->setRange(0,maks_y3*1.5);
            ui->ChartSterowanie->setChart(chart3);
            //ui->graphicsView_3->setRenderHint(QPainter::Antialiasing);
            //ui->graphicsView_3->setVisible(true);
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
    sym.add_A_arx(arg1);
}


void MainWindow::on_ustawB1_valueChanged(double arg1)
{
    sym.add_B_arx(arg1);
}


void MainWindow::on_pushButton_2_clicked()
{

}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    sym.change_Z();
    //cerr<<"changed";
}


void MainWindow::on_pushButton_3_clicked()
{
    //cerr<<sym.get_Y()<<" ";
    timer->stop();
    working=false;
    sym.StartStop();
    sym.Setup();
    sym.reset();
    delete series;
    delete series2;
    delete series3;
    delete series4;
    delete series5;
    delete series6;
    delete series7;
    series = new QSplineSeries();
    series2 = new QSplineSeries();
    series3 = new QSplineSeries();
    series4 = new QSplineSeries();
    series5 = new QSplineSeries();
    series6 = new QSplineSeries();
    series7 = new QSplineSeries();
    series->setName("Uchyb");
    series2->setName("Zadana");
    series3->setName("Regulowana");
    series4->setName("P");
    series5->setName("I");
    series6->setName("D");
    series7->setName("sterowanie");

    //maks_y1=-1;
    //maks_y2=0;
    //maks_y3=0;

    chart1->addSeries(series);
    chart2->addSeries(series2);
    chart2->addSeries(series3);
    chart3->addSeries(series4);
    chart3->addSeries(series5);
    chart3->addSeries(series6);
    chart3->addSeries(series7);

    chart1->createDefaultAxes();
    chart2->createDefaultAxes();
    chart3->createDefaultAxes();

    //timer->start();
    ui->ChartUchyb->setChart(chart1);
    ui->Chartwartosci->setChart(chart2);
    ui->ChartSterowanie->setChart(chart3);
}

