#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <motormatematico.h>
#include <random>
#include <QTimer>
#include <QtMultimedia/QMediaPlayer>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sumas_clicked();
    void on_l1_clicked();
    void on_l2_clicked();
    void on_l3_clicked();
    void on_l4_clicked();
    void on_l5_clicked();
    void on_l6_clicked();
    void on_l7_clicked();
    void on_l8_clicked();
    void on_l9_clicked();
    void on_l10_clicked();

    void on_restas_clicked();
    void on_multiplicacion_clicked();
    void on_respuesta1_clicked();
    void on_respuesta2_clicked();
    void on_respuesta3_clicked();
    void on_respuesta4_clicked();

    //------- timer ------------
    void tiempoJuego();
    void regenerar();

    void on_salir_clicked();

private:
    Ui::MainWindow *ui;
    MotorMatematico *motor;
    QString pantalla_operacion;
    std::string modo;
    short int respuesta , minutos , segundos , level , progreso , meta;
    QTimer temporizador , tiempoAplicacion , regeneracion;
    QMediaPlayer sonido;

    void inicializacionJuego();
    void ocultarNiveles(bool);
    void ocultarRespuestas(bool);
    void sumar(unsigned short int nivel);
    void restar(unsigned short int nivel);
    void multiplicar(unsigned short int nivel);
    void configurarBotonRespuesta();
    void iniciarContador();

};

#endif // MAINWINDOW_H
