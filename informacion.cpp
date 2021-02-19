#include "informacion.h"
#include "ui_informacion.h"

Informacion::Informacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Informacion)
{
    ui->setupUi(this);
}

Informacion::~Informacion()
{
    delete ui;
}
