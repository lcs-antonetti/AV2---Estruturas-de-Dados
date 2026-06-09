#include <string>
#include "paciente.h"

using namespace std;

int cadastrar(PacienteLista &l){
    Paciente* novo = new Paciente;

    cin >> novo->id;
    cin.ignore();              
    getline(cin, novo->nome);
    cin >> novo->idade;
    cin.ignore();             
    getline(cin, novo->cpf);
    getline(cin, novo->telefone);
    getline(cin, novo->endereco);
    getline(cin, novo->sintomas);

    novo->prox = nullptr;

    if(l.inicio == nullptr){
        l.inicio = novo;
        return 1;
    }

    Paciente* aux = l.inicio;

    while(aux->prox != nullptr){
        aux = aux->prox;
    }

    aux->prox = novo;

    return 0;
}
int remover(PacienteLista &l){
	
}
void lista(PacienteLista &l){
	Paciente* aux = l.inicio;
    while(aux != nullptr){
        cout << aux->nome << endl;
        aux = aux->prox
    }
}
void buscar(PacienteLista &l){
	
}
int atualizar(Paciente &p, PacienteLista &l){
	
}


