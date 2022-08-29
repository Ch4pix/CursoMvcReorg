#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Opcion1.h"
#include "DTOHistorial.h"





#pragma once
class Controller
{
public:
	Opcion1 opcion1;
	Prenda prenda;
	Camisa camisa;
	Cotizacion cotizacion;
	Pantalon pantalon;
	std::vector<Prenda> prendas;
	std::vector<Cotizacion> cotizaciones;
	DTOHistorial dtohistorial;
	std::vector<DTOHistorial>DtoVec;
	int opc;
public:
	Controller();
	void ctrCrearCamisa();
	Camisa ctrGetCamisa();
	void ctrSetCuello(int _opc);
	void ctrSetManga(int _opc);
	void ctrSetCalidadCamisa(int _opc);
	void ctrSetPrecioUnitario(int _precio);
	void ctrCrearCotizacion();
	Cotizacion ctrGetCotizacion();
	void ctrCrearPantalon();
	Pantalon ctrGetPantalon();
	void ctrSetTipoPantalon(int _opc);
	void ctrSetCalidadPantalon(int _opc);
	void Opc1();
	vector<DTOHistorial> ctrHistorial(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion);
};

#endif

