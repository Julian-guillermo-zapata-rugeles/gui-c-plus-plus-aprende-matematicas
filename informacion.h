#ifndef INFORMACION_H
#define INFORMACION_H

#include <QWidget>

namespace Ui {
class Informacion;
}

class Informacion : public QWidget
{
    Q_OBJECT

public:
    explicit Informacion(QWidget *parent = nullptr);
    ~Informacion();

private:
    Ui::Informacion *ui;
};

#endif // INFORMACION_H
