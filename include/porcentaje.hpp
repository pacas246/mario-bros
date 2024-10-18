#include<stdexcept>

class porcentaje
{
private:
 int numero;

public:
 porcentaje()
 {
    this->numero = 0;
 }
 porcentaje(int numero)
 {
    if (numero > 100 || numero < 0)
    {
        throw new std::runtime_error("numero fuera de rango.");
    }
    else
    {
        this->numero = numero;
    }
 }
 ~porcentaje() {}
 void incrementar(int numero)
 {
    this-> numero += numero;
 }
 void disminuir(int numero)
 {
    this-> numero -= numero;  
 } 

 int imprimir()
 {
    return this->numero;
 }   
};