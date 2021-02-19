#ifndef SONIDOS_H
#define SONIDOS_H

#include <QObject>
#include <QMediaPlayer>

class Sonidos
{
public:
    Sonidos();
    void sonidoCorrecto();
    void sonidoErroneo();
private:
    QMediaPlayer sonido;

};

#endif // SONIDOS_H
