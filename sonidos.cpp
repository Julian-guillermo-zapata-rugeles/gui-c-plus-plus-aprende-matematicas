#include "sonidos.h"

Sonidos::Sonidos()
{

}

void Sonidos::sonidoCorrecto()
{
    sonido.setMedia(QUrl("qrc:/recursos/win.mp3"));
    sonido.play();
}

void Sonidos::sonidoErroneo()
{
    sonido.setMedia(QUrl("qrc:/recursos/error.mp3"));
    sonido.play();
}
