#include <iostream>
#include "Pacientes/paciente.cpp"

struct NoFila{
    Paciente paciente;
    NoFila* prox;
};
