#ifndef SALA_H
#define SALA_H

#include <iostream>

struct Sala{
    int numero;
    int capacidade;
    bool disponivel;
    Sala* prox;
};

struct SalaLista{
    Sala* inicio = nullptr;
};

#endif