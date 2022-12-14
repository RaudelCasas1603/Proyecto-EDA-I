#pragma once
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class nodo {
private:
    string usuario;
    string contrasenia;
    string direccion;
public:
    friend class usuario;
    void insertar();
    void eliminar();
    void modificar();
    bool buscar(string);
    void cifrar(string);
    void cargar(fstream& in);
    void salvar(fstream& out);
    void imprimir();
};


class usuario {
private:
    vector<nodo> lista;
public:
    void insertar();
    void buscar();
    void modificar();
    void cifrar(string);
    void eliminar();
    void imprimir();
    void cargar(fstream& in);
    void salvar(fstream& out);
};

#endif LISTA_H
