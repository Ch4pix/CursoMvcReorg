#include "ControllerPantalon.h"

void ControllerPantalon::ctrCrearPantalon()
{
	Pantalon pantalon = Pantalon();
}
Pantalon ControllerPantalon::ctrGetPantalon()
{
	return pantalon;
}
void ControllerPantalon::ctrSetTipoPantalon(int _opc)
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
void ControllerPantalon::ctrSetCalidadPantalon(int _opc)
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



