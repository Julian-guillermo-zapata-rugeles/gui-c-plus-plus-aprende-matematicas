#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    motor = new MotorMatematico();
    inicializacionJuego();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::inicializacionJuego()
{

    ocultarRespuestas(true);
    ui->progressBar->hide();
    ui->operacion->setText("ELIJE QUE OPERACION DESEAS PRACTICAR");
    ui->operacion->setStyleSheet("font-size:24pt; font-weight:600; color:#4e9a06;");
    ocultarNiveles(true);
}



void MainWindow::ocultarNiveles(bool hide)
{
    if(hide==true){
        ui->l1->hide();
        ui->l2->hide();
        ui->l3->hide();
        ui->l4->hide();
        ui->l5->hide();
        ui->l6->hide();
        ui->l7->hide();
        ui->l8->hide();
        ui->l9->hide();
        ui->l10->hide();
    }
    else{
        ui->l1->show();
        ui->l2->show();
        ui->l3->show();
        ui->l4->show();
        ui->l5->show();
        ui->l6->show();
        ui->l7->show();
        ui->l8->show();
        ui->l9->show();
        ui->l10->show();
    }
}

void MainWindow::ocultarRespuestas(bool mode)
{
    if(mode==true){
        ui->respuesta1->hide();
        ui->respuesta2->hide();
        ui->respuesta3->hide();
        ui->respuesta4->hide();
    }
    else {
        ui->respuesta1->show();
        ui->respuesta2->show();
        ui->respuesta3->show();
        ui->respuesta4->show();
    }
}

void MainWindow::sumar(unsigned short nivel)
{
    ui->progressBar->show();
    motor->generarOperacion(nivel);
    pantalla_operacion = QString::number(motor->getNumero1())+" + "+QString::number(motor->getNumero2());
    ui->operacion->setText(pantalla_operacion);
    ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    ocultarRespuestas(false);
}


void MainWindow::on_sumas_clicked()
{
    ui->operacion->setText(" MUY BIEN, AHORA SELECCIONA UN NIVEL");
    ui->operacion->setStyleSheet(" font-size:24pt; font-weight:600; color:#4e9a06;");
    ocultarNiveles(false);
    modo="sumar";
}

void MainWindow::on_l1_clicked()
{
    sumar(1);
}

void MainWindow::on_l2_clicked()
{
    sumar(2);
}

void MainWindow::on_l3_clicked()
{
    sumar(3);
}

void MainWindow::on_l4_clicked()
{
    sumar(4);
}

void MainWindow::on_l5_clicked()
{
    sumar(5);
}


void MainWindow::on_l6_clicked()
{
    sumar(6);
}

void MainWindow::on_l7_clicked()
{
    sumar(7);
}

void MainWindow::on_l8_clicked()
{
    sumar(8);
}

void MainWindow::on_l9_clicked()
{
    sumar(9);
}

void MainWindow::on_l10_clicked()
{
    sumar(10);
}
