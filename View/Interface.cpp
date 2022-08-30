#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Interface.h"
#include "OpcionDeMenu_Cotizar.h"
#include "ControllerHistorial.h"

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
	std::vector<Prenda> prendas;
	std::vector<Cotizacion> cotizaciones;
	Prenda prenda;
	Cotizacion cotizacion;
	vector<DTOHistorial>historial;

	while (a != 0)
	{
		std::cout << "Cotizador Express   /   Menu principal" << std::endl;
		std::cout << "Elija una opcion : " << std::endl;
		std::cout << "1: Cotizar." << std::endl;
		std::cout << "2: Historial de cotizaciones." << std::endl;
		std::cout << "3: Salir. " << std::endl;
		std::cin >> opc;

		if (opc == 1)
		{
			OpcionDeMenu_Cotizar opc1;
			opc1.Seleccionar();
			prenda = opc1.getCPrenda();
			prendas.push_back(prenda);
			cotizacion = opc1.getCCotizacion();
			cotizaciones.push_back(cotizacion);
		}
		if (opc == 2)
		{
			ControllerHistorial controllerhistorial = ControllerHistorial();
			historial = controllerhistorial.ctrHistorial(prendas, cotizaciones);
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

	}

}
