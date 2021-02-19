#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <motormatematico.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MotorMatematico *motor;
    void inicializacionJuego();
};

#endif // MAINWINDOW_H
