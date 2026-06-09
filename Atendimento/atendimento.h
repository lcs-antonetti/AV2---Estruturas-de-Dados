#ifndef FILA_H
#define FILA_H

#include "../Pacientes/paciente.cpp"

struct NoFila{
    Paciente paciente;
    NoFila* prox;
};

struct FilaLista{
    NoFila* inicio = nullptr
};

#endif