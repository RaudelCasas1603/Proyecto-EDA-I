#pragma once
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <list>
#include <string>
using namespace std;

class nodo {
private:
    string usuario;
    string contrasenia;
    string direccion;
public:
    friend class lista;
    void insertar();
    void eliminar();
    void cifrar(string);
    void cargar(fstream& in);
    void salvar(fstream& out);
};


class usuario {
private:
    list<nodo> lista;
public:
    void insertar();
    void buscar();
    void cifrar();
    void eliminar();
    void cargar(fstream& in);
    void salvar(fstream& out);
    void cifrar_descifar();
};

#endif LISTA_H
