#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <iostream>
#include <String>

using namespace std;

struct Medicamento{
    int id;
    string nome;
    int quantidade;
    string validade;
    Medicamento* prox;
};

struct MedicoLista{
    Medico* inicio = nullptr;
};

#endif