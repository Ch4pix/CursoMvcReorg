#include "Opcion1.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Caracteristica.h"
#include "Prenda.h"
#include "CuelloMao.h"
#include "MangaCorta.h"
#include "Chupin.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Cotizacion.h"
#include "Vendedor.h"
#include "Controller.h"

Opcion1::Opcion1()
{
}
void Opcion1::Elejir()
{
	Controller controller = Controller();
	int opc = 0;
	system("cls");
	std::cout << "Elija el tipo de prenda" << std::endl;
	std::cout << "1: Camisa" << std::endl;
	std::cout << "2: Pantalon" << std::endl;
	std::cin >> opc;
	if (opc == 1)
	{
		system("cls");
		controller.ctrCrearCamisa();
		std::cout << "Elija el tipo de cuello" << std::endl;
		std::cout << "1: Mao" << std::endl;
		std::cout << "2: Std (standard)" << std::endl;
		std::cin >> opc;
		controller.ctrSetCuello(opc);
		system("cls");
		std::cout << "Elija el tipo de manga" << std::endl;
		std::cout << "1: Larga" << std::endl;
		std::cout << "2: Corta" << std::endl;
		std::cin >> opc;
		controller.ctrSetManga(opc);
		system("cls");
		std::cout << "Elija la calidad de la prenda" << std::endl;
		std::cout << "1: Premium" << std::endl;
		std::cout << "2: Standard" << std::endl;
		std::cin >> opc;
		controller.ctrSetCalidadCamisa(opc);

		int precio;
		std::cout << "Ingrese el precio\n";
		std::cin >> precio;
		controller.ctrSetPrecioUnitario(precio);

		controller.ctrCrearCotizacion();
		std::cout << "Ingrese la cantidad de prendas\n";
		cotizacion = controller.ctrGetCotizacion();
		std::cin >> cotizacion.cantidad_prenda;

		int stok = controller.ctrGetCamisa().getStock();
		std::cout << "stock " << stok << std::endl;
		while (cotizacion.cantidad_prenda > stok)
		{
			std::cout << "------------------------" << std::endl;
			std::cout << "No hay suficiente stock!\n";
			std::cout << "Ingrese otra cantidad\n";
			std::cout << "------------------------" << std::endl;
			std::cin >> cotizacion.cantidad_prenda;
		}

		double res = cotizacion.CotizarTotal(controller.ctrGetCamisa());
		system("cls");
		controller.ctrGetCamisa().getCamisa();
		controller.ctrGetCamisa().getPrecioUnitario();
		controller.ctrGetCamisa().getCalidad();
		std::cout << "El total es : " << res << "\n";
		std::cout << cotizacion.cantidad_prenda << " Cantidad de prenda/s\n";
		std::cout << "-----------------" << std::endl;
		this->prenda = controller.ctrGetCamisa();
		this->cotizacion = cotizacion;




		opc = 0;
	}
	if (opc == 2)
	{
		controller.ctrCrearPantalon();
		system("cls");
		std::cout << "Elija el tipo de pantalon" << std::endl;
		std::cout << "1: Chupin" << std::endl;
		std::cout << "2: Normal" << std::endl;
		std::cin >> opc;
		controller.ctrSetTipoPantalon(opc);
		system("cls");
		std::cout << "Elija la calidad de la prenda" << std::endl;
		std::cout << "1: Premium" << std::endl;
		std::cout << "2: Standard" << std::endl;
		std::cin >> opc;
		controller.ctrSetCalidadPantalon(opc);
		int precio;
		std::cout << "Ingrese el precio\n";
		std::cin >> precio;
		controller.ctrSetPrecioUnitario(precio);
		controller.ctrCrearCotizacion();
		std::cout << "Ingrese la cantidad de prendas\n";
		cotizacion = controller.ctrGetCotizacion();
		std::cin >> cotizacion.cantidad_prenda;

		int stok = controller.ctrGetPantalon().getStock();
		while (cotizacion.cantidad_prenda > stok)
		{
			std::cout << "------------------------" << std::endl;
			std::cout << "No hay suficiente stock!\n";
			std::cout << "Ingrese otra cantidad\n";
			std::cout << "------------------------" << std::endl;
			std::cin >> cotizacion.cantidad_prenda;
		}

		double res = cotizacion.CotizarTotal(controller.ctrGetPantalon());
		system("cls");
		controller.ctrGetPantalon().getPantalon();
		controller.ctrGetPantalon().getPrecioUnitario();
		controller.ctrGetPantalon().getCalidad();
		std::cout << "El total es : " << res << "\n";
		std::cout << cotizacion.cantidad_prenda << " Cantidad de prenda/s\n";
		std::cout << "-----------------" << std::endl;
		this->prenda = controller.ctrGetPantalon();
		this->cotizacion = cotizacion;

	}
}
void Opcion1::setCPrenda(Prenda _prenda)
{
	this->prenda = _prenda;
}
Prenda Opcion1::getCPrenda()
{
	return prenda;
}
void Opcion1::setCCotizacion(Cotizacion _cotizacion)
{
	this->cotizacion = _cotizacion;
}
Cotizacion Opcion1::getCCotizacion()
{
	return cotizacion;
}


