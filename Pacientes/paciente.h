#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

using namespace std;

struct Paciente{
    int id;
    string nome;
    int idade;
    string cpf;
    string telefone;
    string endereco;
    string sintomas;
    Paciente* prox;
};

struct PacienteLista{
    Paciente* inicio = nullptr;
};

void cadastrar(Paciente &p);
void remover(Paciente &p);
void listar();
void buscar();
void atualizar(Paciente &p);

#endif