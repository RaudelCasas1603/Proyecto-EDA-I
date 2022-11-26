
#include <iostream>
#include "Lista.h"
#include <string>
#include <fstream>
using namespace std;
int main()
{
    usuario cucei;
	int opc=0;
	string llave="cucei";
	fstream in, out;
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
			cucei.insertar();
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
			cucei.buscar();
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
			cout << "Datos Cargados" << endl;
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			out.open("Archivo.txt", ios_base::out);
			cucei.salvar(out);
			out.close();
			cout << "Datos guardados" << endl;
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

