#ifndef CONTROLLERHISTORIAL_H
#define CONTROLLERHISTORIAL_H
#include "DTOHistorial.h"
#include "Camisa.h"
#include "Cotizacion.h"

#pragma once
class ControllerHistorial
{
public:
	DTOHistorial dtohistorial;
	vector<DTOHistorial> ctrHistorial(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion);
};
#endif
