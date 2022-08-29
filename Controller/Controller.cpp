#include "Controller.h"
#include "CuelloMao.h"
#include "MangaCorta.h"
#include "DTOHistorial.h"
#include <vector>

Controller::Controller()
{
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
vector <DTOHistorial> Controller::ctrHistorial(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion)
{
	system("cls");
	vector <DTOHistorial>historial;
	for (int i = 0; i < _prenda.size(); i++)
	{
		dtohistorial.prenda = _prenda[i].getPrenda();
		dtohistorial.preciuni = _prenda[i].getPrecioUnitario();
		dtohistorial.total = _cotizacion[i].CotizarTotal(_prenda[i]);
		dtohistorial.calidad = _prenda[i].getCalidad();
		historial.push_back(dtohistorial);
	}
	return historial;
}




void Controller::Opc1()
{
	opcion1.Elejir();
}


