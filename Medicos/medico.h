#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>
#include <String>

using namespace std;

struct Medico{
    int id;
    string nome;
    string especialidade;
    string crm;
    string telefone;
    Medico* prox;
};

struct MedicoLista{
    Medico* inicio = nullptr;
};

#endif