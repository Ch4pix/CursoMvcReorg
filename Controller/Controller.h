#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Camisa.h"
#include "Pantalon.h"
#include "Cotizacion.h"
#include "DTOHistorial.h"
#include "Prenda.h"




#pragma once
class Controller
{
public:
	Camisa camisa;
	Cotizacion cotizacion;
	Pantalon pantalon;
	Prenda prenda;
	int opc;
public:
	Controller();
	void ctrSetPrecioUnitario(int _precio);
	void ctrCrearCotizacion();
	Cotizacion ctrGetCotizacion();

	void setCPrenda(Prenda _prenda);

	Prenda getCPrenda();

	void setCCotizacion(Cotizacion _cotizacion);

	Cotizacion getCCotizacion();

	DTOHistorial DatosCotizacion(Prenda _prenda, Cotizacion _cotizacion);

};

#endif

