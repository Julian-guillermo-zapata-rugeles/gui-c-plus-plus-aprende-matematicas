#ifndef MOTORMATEMATICO_H
#define MOTORMATEMATICO_H

#include <QObject>
#include <QString>
#include <random>
#include <time.h>
class MotorMatematico
{
public:
    MotorMatematico();
    // metodos getter //
    unsigned short getNumero1() const;
    unsigned short getNumero2() const;
    unsigned short getResultado() const;

    void generarOperacion(unsigned short int nivel);
    bool comprobarOperacion(unsigned short int eleccion);


private:
    unsigned short int numero1 , numero2 ;
    unsigned short int generarNumero(unsigned short int nivel);

};

#endif // MOTORMATEMATICO_H
