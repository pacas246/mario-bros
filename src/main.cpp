#include <iostream>
#include <porcentaje.hpp>

int main (){
    porcentaje foco1;
    porcentaje foco2;
    porcentaje foco3;

    foco1.incrementar(10);
    foco1.incrementar(10);
    foco1.disminuir(4);

    std::cout
    <<"foco 1:"
    <<foco1.imprimir()
    <<std::endl;
}