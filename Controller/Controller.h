#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Camisa.h"
#include "Pantalon.h"
#include "Cotizacion.h"
#include "DTOHistorial.h"





#pragma once
class Controller
{
public:
	Camisa camisa;
	Cotizacion cotizacion;
	Pantalon pantalon;
	int opc;
public:
	Controller();
	void ctrSetPrecioUnitario(int _precio);
	void ctrCrearCotizacion();
	Cotizacion ctrGetCotizacion();
};

#endif

