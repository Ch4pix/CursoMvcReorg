#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Interface.h"
#include "OpcionDeMenu_Cotizar.h"
#include "Controller.h"
#include "DTOHistorial.h"

using namespace std;

Interface::Interface()
{
}
Interface::~Interface()
{
}
void Interface::Ejecutar()
{

	int a = 1;
	int opc;
	enum MyEnum { Opcion1 = 1, Opcion2 = 2, Opcion3 = 3 };
	vector<DTOHistorial>historial;

	while (a != 0)
	{
		std::cout << "Cotizador Express   /   Menu principal" << std::endl;
		std::cout << "Elija una opcion : " << std::endl;
		std::cout << "1: Cotizar." << std::endl;
		std::cout << "2: Historial de cotizaciones." << std::endl;
		std::cout << "3: Salir. " << std::endl;
		std::cin >> opc;

		switch (opc)
		{
		case Opcion1:
		{
			Controller controller;
			OpcionDeMenu_Cotizar opc1;
			DTOHistorial dtohistorial;
			dtohistorial = opc1.Seleccionar();
			historial.push_back(dtohistorial);
			break;
		}
		case Opcion2:
		{
			system("cls");
			for (int i = 0; i < historial.size(); i++)
			{
				cout << historial[i].prenda << endl;
				cout << historial[i].calidad << endl;
				cout << "Precio unitario: " << historial[i].preciuni << endl;
				cout << "Total: " << historial[i].total << endl;
				cout << "-----------------------\n";
			}
			break;
		}
		case Opcion3:
		{
			a = 0;
			break;
		}
		default:
		{
			break;
		}
		/*if (opc == 1)
		{
			Controller controller;
			OpcionDeMenu_Cotizar opc1;
			DTOHistorial dtohistorial;
			dtohistorial = opc1.Seleccionar();
			historial.push_back(dtohistorial);

		}
		if (opc == 2)
		{
			system("cls");
			for (int i = 0; i < historial.size(); i++)
			{
				cout << historial[i].prenda << endl;
				cout << historial[i].calidad << endl;
				cout << "Precio unitario: " << historial[i].preciuni << endl;
				cout << "Total: " << historial[i].total << endl;
				cout << "-----------------------\n";
			}
		}
		if (opc == 3)
		{
			a = 0;
		}

	}*/

		}
	}
}
