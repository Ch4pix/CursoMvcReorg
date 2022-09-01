#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Interface.h"
#include "OpcionDeMenu_Cotizar.h"
#include "Controller.h"
#include "DTOHistorial.h"
#include "Enum.h"

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

	vector<DTOHistorial>historial;
	Enum ennum;
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
		case ennum.Quote_Option:
		{
			Controller controller;
			OpcionDeMenu_Cotizar opc1;
			DTOHistorial dtohistorial;
			dtohistorial = opc1.Seleccionar();
			historial.push_back(dtohistorial);
			break;
		}
		case ennum.ShowHistory_Option:
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
		case ennum.Quit:
		{
			a = 0;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}
