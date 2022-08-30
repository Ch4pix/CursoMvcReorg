#ifndef CONTROLLERPANTALON_H
#define CONTROLLERPANTALON_H

#include "OpcionDeMenu_Cotizar.h"

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
