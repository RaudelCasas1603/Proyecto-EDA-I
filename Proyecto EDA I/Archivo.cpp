#include "Lista.h"
#include <fstream>
#include <string>
using namespace std;

void nodo::cargar(fstream& in) {

    in >> this->usuario;
    in >> this->contrasenia;
    in >> this->direccion;

}

void nodo::salvar(fstream& out) {
    out << this->usuario << endl;
    out << this->contrasenia << endl;
    out << this->direccion << endl;
}

void usuario::salvar(fstream& out) {
    out << lista.size() << endl;
    for (int i = 0; i < lista.size(); i++) {
        lista[i].salvar(out);
    }
}

void usuario::cargar(fstream& in) {
    int size;
    nodo aux;
    in >> size;
    for (int i = 0; i < size; i++) {
        aux.cargar(in);
        lista.push_back(aux);
    }
}

void usuario::cifrar(string llave) {


    for (int i = 0; i < lista.size(); i++) {
        lista[i].cifrar(llave);
   }
}

void nodo::cifrar(string llave) {
    string aux, salida;
    int j = 0;
    aux = this->contrasenia;
    salida = aux;

    for (int i = 0; i < aux.size(); i++) {
        if (j == llave.size()) {
            j = 0;
        }
        salida[i] = aux[i] ^ llave[j];
        j++;
    }
    this->contrasenia = salida;
}

void nodo::imprimir() {
    cout << this->usuario << endl;
    cout << this->contrasenia << endl;
    cout << this->direccion << endl;
}

void usuario::imprimir() {
    for (int i = 0; i < lista.size(); i++) {
        cout << i + 1 << endl;
        lista[i].imprimir();
    }
}