
#include <iostream>
#include "Lista.h"
#include <string>
#include <fstream>
using namespace std;


string procesamiento(string llave) {
	int aux = 0;
	char letra;
	string resp;

	for (int i = 0; i < llave.size(); i++) {
		letra = llave.at(i);
		aux += (int)letra;
	}
	while (aux > 122) {
		aux = aux / 2;
	}

	letra = (char)aux;
	resp.push_back(letra);
	return resp;;
}


int main()
{
    usuario cucei;
	int opc=0;
	string pass;
	string llave;
	fstream in, out;

	cout << "Administrador de Contrasenias" << endl;
	cout << "Ingrese la contrasenia de Inicio: ";
	cin >> pass;
	llave=procesamiento(pass);//se pasa por un proceso de prepocesamiento de la contraseña de donde se extrae un char para manejarlo como llave
	system("pause");
	system("cls");

	do
	{
		cout << "Administrador de Contraseñas" << endl;
		cout << "Ingrese la opcion que desee: " << endl;
		cout << "1.Agregar\n2.Buscar\n3.Editar\n4.Eliminar\n5.Cargar\n6.Guardar\n7.Cifrar/Descifrar\n8.Listar\n9.Salir" << endl;
		cout << ">";
		cin >> opc;

		switch (opc)
		{
		case 1:
			system("cls");
			fflush(stdin);
			fflush(stdin);
			cucei.insertar();
			fflush(stdin);
			fflush(stdin);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cucei.buscar();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cucei.modificar();
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			cucei.eliminar();
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			in.open("Archivo.txt", ios_base::in);
			cucei.cargar(in);
			in.close();
			cout << "\t\tDatos Cargados" << endl;
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			out.open("Archivo.txt", ios_base::out);
			cucei.salvar(out);
			out.close();
			cout << "\t\tDatos guardados" << endl;
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			fflush(stdin);;
			cucei.cifrar(llave);
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			cucei.imprimir();
			system("pause");
			system("cls");
			break;
		case 9:
			break;
		default:
			break;
		}

	} while (opc!=9);
}

