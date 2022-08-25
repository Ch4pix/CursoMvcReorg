#include "Controller.h"
#include "CuelloMao.h"
#include "MangaCorta.h"

Controller::Controller()
{
}
//void Controller::Opc2()
//{
//	opcion2.Elejir();
//}
void Controller::printDefault()
{
	std::cout << "Cotizador Express   /   Menu principal" << std::endl;
	std::cout << "Elija una opcion : " << std::endl;
	std::cout << "1: Cotizar." << std::endl;
	std::cout << "2: Historial de cotizaciones." << std::endl;
	std::cout << "3: Salir. " << std::endl;
	std::cin >> opc;
}
int Controller::retOpc()
{
	return opc;
}
void Controller::ctrCrearCamisa()
{
	Camisa camisa = Camisa();
}
Camisa Controller::ctrGetCamisa()
{
	return camisa;
}
void Controller::ctrSetCuello(int _opc)
{
	if (_opc == 1)
	{
		CuelloMao cuello = CuelloMao();
		camisa.setCamisa(cuello);
	}
	if (_opc == 2)
	{
		CuelloMao cuello = CuelloMao();
		cuello.CuelloNormal();
		camisa.setCamisa(cuello);
	}
}
void Controller::ctrSetManga(int _opc)
{
	if (_opc == 1)
	{
		MangaCorta manga = MangaCorta();
		manga.MangaLarga();
		camisa.setCamisa(manga);
	}
	if (_opc == 2)
	{
		MangaCorta manga = MangaCorta();
		camisa.setCamisa(manga);
	}
}
void Controller::ctrSetCalidadCamisa(int _opc)
{
	if (_opc == 1)
	{
		camisa.setCalidad("Premium");
		camisa.setStock(100);
	}
	if (_opc == 2)
	{
		camisa.setCalidad("Standard");
		camisa.setStock(150);
	}
}
void Controller::ctrSetPrecioUnitario(int _precio)
{
	camisa.setPrecioUnitario(_precio);
	pantalon.setPrecioUnitario(_precio);
}
void Controller::ctrCrearCotizacion()
{
	Cotizacion cotizacion = Cotizacion();
}
Cotizacion Controller::ctrGetCotizacion()
{
	return cotizacion;
}
void Controller::ctrCrearPantalon()
{
	Pantalon pantalon = Pantalon();
}
Pantalon Controller::ctrGetPantalon()
{
	return pantalon;
}
void Controller::ctrSetTipoPantalon(int _opc)
{
	if (_opc == 1)
	{
		Chupin chupin = Chupin();
		pantalon.setPantalon(chupin);
	}
	if (_opc == 2)
	{
		Chupin chupin = Chupin();
		chupin.NoChupin();
		pantalon.setPantalon(chupin);
	}
}
void Controller::ctrSetCalidadPantalon(int _opc)
{
	if (_opc == 1)
	{
		pantalon.setCalidad("Premium");
		pantalon.setStock(250);
	}
	if (_opc == 2)
	{
		pantalon.setCalidad("Standard");
		pantalon.setStock(500);
	}
}
void Controller::ctrHistorial(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion)
{
	system("cls");
	for (int i = 0; i < _prenda.size(); i++)
	{
		std::cout << "-----------------" << std::endl;
		/*std::cout << vendedor.nombre_vendedor << std::endl;
		std::cout << vendedor.apellido_vendedor << std::endl;
		std::cout << vendedor.id_vendedor << std::endl;*/
		_prenda[i].getPrenda();
		double pu = _prenda[i].getPrecioUnitario();
		std::cout << "Precio unitario: " << pu << "\n";
		std::cout << "Cantidad de prendas : " << _cotizacion[i].cantidad_prenda;
		double total = _cotizacion[i].CotizarTotal(_prenda[i]);
		std::cout << "El total es : " << total << "\n";
		std::cout << "\n";
	}
}




void Controller::Opc1()
{
	opcion1.Elejir();
}
//void Controller::Opc2()
//{
//	opcion2.Elejir(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion);
//}



