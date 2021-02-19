#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(0));
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
    respuesta=motor->getNumero1()+motor->getNumero2();
    ui->operacion->setText(pantalla_operacion);
    ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    ocultarRespuestas(false);
    configurarBotonRespuesta();
}

void MainWindow::restar(unsigned short nivel)
{
    ui->progressBar->show();
    motor->generarOperacion(nivel);
    pantalla_operacion = QString::number(motor->getNumero1())+" - "+QString::number(motor->getNumero2());
    respuesta=motor->getNumero1()-motor->getNumero2();
    ui->operacion->setText(pantalla_operacion);
    ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    ocultarRespuestas(false);
    configurarBotonRespuesta();
}

void MainWindow::multiplicar(unsigned short nivel)
{
    ui->progressBar->show();
    motor->generarOperacion(nivel);
    pantalla_operacion = QString::number(motor->getNumero1())+" x "+QString::number(motor->getNumero2());
    respuesta=motor->getNumero1()*motor->getNumero2();
    ui->operacion->setText(pantalla_operacion);
    ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    ocultarRespuestas(false);
    configurarBotonRespuesta();
}

void MainWindow::configurarBotonRespuesta()
{
    short int tmp = 1+rand()%4;
    ui->respuesta1->setText(QString::number(respuesta+(1-rand()%10)));
    ui->respuesta2->setText(QString::number(respuesta+(1+rand()%10)));
    ui->respuesta3->setText(QString::number(respuesta+(1-rand()%10)));
    ui->respuesta4->setText(QString::number(respuesta+(1+rand()%10)));

    if(tmp==1){
        ui->respuesta1->setText(QString::number(respuesta));
    }
    else if(tmp==2){
        ui->respuesta2->setText(QString::number(respuesta));
    }
    else if(tmp==3){
        ui->respuesta3->setText(QString::number(respuesta));
    }
    else{
        ui->respuesta4->setText(QString::number(respuesta));
    }
}



void MainWindow::on_sumas_clicked()
{
    ui->operacion->setText(" MUY BIEN, AHORA SELECCIONA UN NIVEL DE SUMAS");
    ui->operacion->setStyleSheet(" font-size:15pt; font-weight:600; color:#4e9a06;");
    ocultarNiveles(false);
    modo="sumar";

}


void MainWindow::on_restas_clicked()
{
    ui->operacion->setText(" MUY BIEN, AHORA SELECCIONA UN NIVEL DE RESTAS");
    ui->operacion->setStyleSheet(" font-size:15pt; font-weight:600; color:#4e9a06;");
    ocultarNiveles(false);
    modo="restar";

}

void MainWindow::on_multiplicacion_clicked()
{
    ui->operacion->setText(" MUY BIEN, AHORA SELECCIONA UN NIVEL DE MULTIPLICACIÓN");
    ui->operacion->setStyleSheet(" font-size:15pt; font-weight:600; color:#4e9a06;");
    ocultarNiveles(false);
    modo="multiplicar";

}












void MainWindow::on_l1_clicked()
{
    if(modo=="sumar"){
        sumar(1);
    }
    if(modo=="restar"){
        restar(1);
    }
    if(modo=="multiplicar"){
        multiplicar(1);
    }
}

void MainWindow::on_l2_clicked()
{
    if(modo=="sumar"){
        sumar(2);
    }
    if(modo=="restar"){
        restar(2);
    }
    if(modo=="multiplicar"){
        multiplicar(2);
    }
}

void MainWindow::on_l3_clicked()
{
    if(modo=="sumar"){
        sumar(3);
    }
    if(modo=="restar"){
        restar(3);
    }
    if(modo=="multiplicar"){
        multiplicar(3);
    }
}

void MainWindow::on_l4_clicked()
{
    if(modo=="sumar"){
        sumar(4);
    }
    if(modo=="restar"){
        restar(4);
    }
    if(modo=="multiplicar"){
        multiplicar(4);
    }
}

void MainWindow::on_l5_clicked()
{
    if(modo=="sumar"){
        sumar(5);
    }
    if(modo=="restar"){
        restar(5);
    }
    if(modo=="multiplicar"){
        multiplicar(5);
    }
}


void MainWindow::on_l6_clicked()
{
    if(modo=="sumar"){
        sumar(6);
    }
    if(modo=="restar"){
        restar(6);
    }
    if(modo=="multiplicar"){
        multiplicar(6);
    }
}

void MainWindow::on_l7_clicked()
{
    if(modo=="sumar"){
        sumar(7);
    }
    if(modo=="restar"){
        restar(7);
    }
    if(modo=="multiplicar"){
        multiplicar(7);
    }
}

void MainWindow::on_l8_clicked()
{
    if(modo=="sumar"){
        sumar(8);
    }
    if(modo=="restar"){
        restar(8);
    }
    if(modo=="multiplicar"){
        multiplicar(8);
    }
}

void MainWindow::on_l9_clicked()
{
    if(modo=="sumar"){
        sumar(9);
    }
    if(modo=="restar"){
        restar(9);
    }
    if(modo=="multiplicar"){
        multiplicar(9);
    }
}

void MainWindow::on_l10_clicked()
{
    if(modo=="sumar"){
        sumar(10);
    }
    if(modo=="restar"){
        restar(10);
    }
    if(modo=="multiplicar"){
        multiplicar(10);
    }
}

void MainWindow::on_respuesta1_clicked()
{
    short int  tmp_value =ui->respuesta1->text().toShort();
    if(motor->comprobarOperacion(tmp_value,modo)){
        ui->operacion->setText(" MUY BIEN !");
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    }
    else{
        ui->operacion->setText(" CASI : "+QString::number(respuesta));
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:red;");
    }
}

void MainWindow::on_respuesta2_clicked()
{
    short int  tmp_value =ui->respuesta2->text().toShort();
    if(motor->comprobarOperacion(tmp_value,modo)){
        ui->operacion->setText(" MUY BIEN !");
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    }
    else{
        ui->operacion->setText(" CASI : "+QString::number(respuesta));
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:red;");
    }
}



void MainWindow::on_respuesta3_clicked()
{
    short int  tmp_value =ui->respuesta3->text().toShort();
    if(motor->comprobarOperacion(tmp_value,modo)){
        ui->operacion->setText(" MUY BIEN !");
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    }
    else{
        ui->operacion->setText(" CASI : "+QString::number(respuesta));
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:red;");
    }
}




void MainWindow::on_respuesta4_clicked()
{
    short int  tmp_value =ui->respuesta4->text().toShort();
    if(motor->comprobarOperacion(tmp_value,modo)){
        ui->operacion->setText(" MUY BIEN !");
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:#4e9a06;");
    }
    else{
        ui->operacion->setText(" CASI : "+QString::number(respuesta));
        ui->operacion->setStyleSheet(" font-size:40pt; font-weight:600; color:red;");
    }
}
