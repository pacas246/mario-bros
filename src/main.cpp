#include <iostream>
#include <porcentaje.hpp>
#include <list>

int main (){
    std::list<porcentaje> focos;

    porcentaje foco1;
    porcentaje foco2;
    porcentaje foco3;

    focos.emplace_back(foco1);
    focos.emplace_back(foco2);
    focos.emplace_back(foco3);

    for (auto &&f : focos)
    {
      f.incrementar(10);
    }



    foco1.incrementar(10);
    foco2.incrementar(10);
    foco3.disminuir(4);
    
    std::cout
    <<"foco 1: "
    <<foco1.imprimir()
    <<std::endl;
}