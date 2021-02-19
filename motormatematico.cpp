#include "motormatematico.h"

MotorMatematico::MotorMatematico()
{
    this->numero1=0;
    this->numero2=0;
}



unsigned short MotorMatematico::generarNumero(unsigned short nivel)
{
    unsigned short int numero;
    srand(time(NULL));
    numero=0+rand()%5+nivel;
    return numero;

}




/*  ------------------ MÉTODOS SETTER Y GETTER --------------------   */

unsigned short MotorMatematico::getNumero1() const
{
    return numero1;
}

unsigned short MotorMatematico::getNumero2() const
{
    return numero2;
}



/*-------------------- OPERACIONES MATEMATICAS ---------------------------*/
void MotorMatematico::generarOperacion(unsigned short nivel)
{
    this->numero1=generarNumero(nivel);
    this->numero2=generarNumero(nivel);

}

bool MotorMatematico::comprobarOperacion(unsigned short eleccion, std::string modo)
{
    unsigned short int tmp_value=0;
    if(modo=="sumar"){
        tmp_value=numero1+numero2;
    }
    if(modo=="restar"){
        tmp_value=numero1-numero2;
    }
    if(modo=="multiplicar"){
        numero1=numero1*numero2;
    }
    if(tmp_value==eleccion){
        return true;
    }
    return false;

}
