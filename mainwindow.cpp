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
    ui->respuesta1->hide();
    ui->respuesta2->hide();
    ui->respuesta3->hide();
    ui->respuesta4->hide();
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


void MainWindow::on_sumas_clicked()
{
    ui->operacion->setText(" MUY BIEN, AHORA SELECCIONA UN NIVEL");
    ui->operacion->setStyleSheet(" font-size:24pt; font-weight:600; color:#4e9a06;");
    ocultarNiveles(false);
}
