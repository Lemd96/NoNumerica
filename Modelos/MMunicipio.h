#ifndef MMunicipio_H
#define MMunicipio_H
#include <iostream>
#include <string>
#include "MCentinela.h"
#include "../General/Lista.h"
using namespace std;

class MMunicipio {
private:
    string nombre;
    string codigo;
    Lista<MCentinela> centinelas;
public:
    MMunicipio();
    int totalCentinelas();
    void agregarCentinela(MCentinela centinela);
    void removerCentinela(string codigo, MCentinela &centinela);
};

#endif
