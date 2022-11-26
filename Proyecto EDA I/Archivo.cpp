#include "Lista.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
void nodo::insertar()
{
    fflush(stdin);
    cout << "\n favor de ingresar aqui el nombre de usuario: ";
    getline(cin, this->usuario);
    fflush(stdin);
    cout << "\n favor de ingresar aqui la contraseña: ";
    getline(cin, this->contrasenia);
    fflush(stdin);
    cout << "\n favor de ingresar aqui la direccion: ";
    getline(cin, this->direccion);
    fflush(stdin);
}

void usuario::insertar()
{
    nodo aux;
    aux.insertar();
    lista.push_back(aux);
}


bool nodo::buscar(string aux)
{
    if (this->direccion == aux)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void usuario::buscar()
{
    string direccion;
    int i;
    fflush(stdin);
    cout << "\n favor de ingresar aqui el nombre de usuario: ";
    getline(cin, direccion);
    for (i = 0; i < lista.size(); i++)
    {
        if (lista[i].buscar(direccion)) {
            break;
        }
    }
    cout << lista[i].usuario << endl;
    cout << lista[i].direccion << endl;
    cout << lista[i].contrasenia << endl;
}

void nodo::eliminar() {
    this->imprimir();
}


void usuario::eliminar() {
    string direccion;
    int i;
    fflush(stdin);
    cout << "\n favor de ingresar aqui el nombre de usuario: ";
    fflush(stdin);
    getline(cin, direccion);

    for (i = 0; i < lista.size(); i++) {
        if (lista[i].buscar(direccion)) {
            lista[i].eliminar();
            lista.erase(lista.begin() + i);
        }
    }

}

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