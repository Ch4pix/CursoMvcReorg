#ifndef  CONTROLLERCAMISA_H
#define CONTROLLERCAMISA_H
#include "OpcionDeMenu_Cotizar.h"


#pragma once
class ControllerCamisa
{
public:
	Prenda prenda;
	Camisa camisa;

public:
	void ctrCrearCamisa();
	Camisa ctrGetCamisa();
	void ctrSetCuello(int _opc);
	void ctrSetManga(int _opc);
	void ctrSetCalidadCamisa(int _opc);
};
#endif
