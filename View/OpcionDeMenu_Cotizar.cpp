#include "OpcionDeMenu_Cotizar.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Controller.h"
#include "ControllerCamisa.h"
#include "ControllerPantalon.h"
#include "ControllerHistorial.h"
#include "DTOHistorial.h"

OpcionDeMenu_Cotizar::OpcionDeMenu_Cotizar()
{
}
DTOHistorial OpcionDeMenu_Cotizar::Seleccionar()
{
	ControllerCamisa controllercam = ControllerCamisa();
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
		controllercam.ctrCrearCamisa();
		std::cout << "Elija el tipo de cuello" << std::endl;
		std::cout << "1: Mao" << std::endl;
		std::cout << "2: Std (standard)" << std::endl;
		std::cin >> opc;
		controllercam.ctrSetCuello(opc);
		system("cls");
		std::cout << "Elija el tipo de manga" << std::endl;
		std::cout << "1: Larga" << std::endl;
		std::cout << "2: Corta" << std::endl;
		std::cin >> opc;
		controllercam.ctrSetManga(opc);
		system("cls");
		std::cout << "Elija la calidad de la prenda" << std::endl;
		std::cout << "1: Premium" << std::endl;
		std::cout << "2: Standard" << std::endl;
		std::cin >> opc;
		controllercam.ctrSetCalidadCamisa(opc);

		int precio;
		std::cout << "Ingrese el precio\n";
		std::cin >> precio;
		controller.ctrSetPrecioUnitario(precio);

		controller.ctrCrearCotizacion();
		std::cout << "Ingrese la cantidad de prendas\n";
		cotizacion = controller.ctrGetCotizacion();
		std::cin >> cotizacion.cantidad_prenda;

		int stok = controllercam.ctrGetCamisa().getStock();
		std::cout << "stock " << stok << std::endl;
		while (cotizacion.cantidad_prenda > stok)
		{
			std::cout << "------------------------" << std::endl;
			std::cout << "No hay suficiente stock!\n";
			std::cout << "Ingrese otra cantidad\n";
			std::cout << "------------------------" << std::endl;
			std::cin >> cotizacion.cantidad_prenda;
		}

		double res = cotizacion.CotizarTotal(controllercam.ctrGetCamisa());
		system("cls");
		controllercam.ctrGetCamisa().getCamisa();
		controllercam.ctrGetCamisa().getPrecioUnitario();
		controllercam.ctrGetCamisa().getCalidad();
		std::cout << "El total es : " << res << "\n";
		std::cout << cotizacion.cantidad_prenda << " Cantidad de prenda/s\n";
		std::cout << "-----------------" << std::endl;
		this->prenda = controllercam.ctrGetCamisa();
		this->cotizacion = cotizacion;
		DTOHistorial dtohistorial;
		dtohistorial = controller.DatosCotizacion(prenda, cotizacion);

		return dtohistorial;



		opc = 0;
	}
	if (opc == 2)
	{
		ControllerPantalon controllerpant = ControllerPantalon();
		controllerpant.ctrCrearPantalon();
		system("cls");
		std::cout << "Elija el tipo de pantalon" << std::endl;
		std::cout << "1: TipoPantalon" << std::endl;
		std::cout << "2: Normal" << std::endl;
		std::cin >> opc;
		controllerpant.ctrSetTipoPantalon(opc);
		system("cls");
		std::cout << "Elija la calidad de la prenda" << std::endl;
		std::cout << "1: Premium" << std::endl;
		std::cout << "2: Standard" << std::endl;
		std::cin >> opc;
		controllerpant.ctrSetCalidadPantalon(opc);
		int precio;
		std::cout << "Ingrese el precio\n";
		std::cin >> precio;
		controller.ctrSetPrecioUnitario(precio);
		controller.ctrCrearCotizacion();
		std::cout << "Ingrese la cantidad de prendas\n";
		cotizacion = controller.ctrGetCotizacion();
		std::cin >> cotizacion.cantidad_prenda;


		int stok = controllerpant.ctrGetPantalon().getStock();
		while (cotizacion.cantidad_prenda > stok)
		{
			std::cout << "------------------------" << std::endl;
			std::cout << "No hay suficiente stock!\n";
			std::cout << "Ingrese otra cantidad\n";
			std::cout << "------------------------" << std::endl;
			std::cin >> cotizacion.cantidad_prenda;
		}

		double res = cotizacion.CotizarTotal(controllerpant.ctrGetPantalon());
		system("cls");
		controllerpant.ctrGetPantalon().getPantalon();
		controllerpant.ctrGetPantalon().getPrecioUnitario();
		controllerpant.ctrGetPantalon().getCalidad();
		std::cout << "El total es : " << res << "\n";
		std::cout << cotizacion.cantidad_prenda << " Cantidad de prenda/s\n";
		std::cout << "-----------------" << std::endl;
		this->prenda = controllerpant.ctrGetPantalon();
		this->cotizacion = cotizacion;
		DTOHistorial dtohistorial;
		dtohistorial = controller.DatosCotizacion(prenda, cotizacion);

		return dtohistorial;

	}
}


