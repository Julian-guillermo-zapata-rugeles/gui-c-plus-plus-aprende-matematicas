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
    ui->operacion->setStyleSheet(" font-size:24pt; font-weight:600; color:#4e9a06;");
}
