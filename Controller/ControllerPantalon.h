#ifndef CONTROLLERPANTALON_H
#define CONTROLLERPANTALON_H
#include "Pantalon.h"
#include "TipoPantalon.h"

#pragma once
class ControllerPantalon
{
public:
	Pantalon pantalon;
public:
	void ctrCrearPantalon();
	Pantalon ctrGetPantalon();
	void ctrSetTipoPantalon(int _opc);
	void ctrSetCalidadPantalon(int _opc);
};
#endif
