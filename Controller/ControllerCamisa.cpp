#include "ControllerCamisa.h"

void ControllerCamisa::ctrCrearCamisa()
{
	Camisa camisa = Camisa();
}
Camisa ControllerCamisa::ctrGetCamisa()
{
	return camisa;
}
void ControllerCamisa::ctrSetCuello(int _opc)
{
	if (_opc == 1)
	{
		TipoCuello cuello = TipoCuello();
		camisa.setCamisa(cuello);
	}
	if (_opc == 2)
	{
		TipoCuello cuello = TipoCuello();
		cuello.CuelloNormal();
		camisa.setCamisa(cuello);
	}
}
void ControllerCamisa::ctrSetManga(int _opc)
{
	if (_opc == 1)
	{
		TipoManga manga = TipoManga();
		manga.MangaLarga();
		camisa.setCamisa(manga);
	}
	if (_opc == 2)
	{
		TipoManga manga = TipoManga();
		camisa.setCamisa(manga);
	}
}
void ControllerCamisa::ctrSetCalidadCamisa(int _opc)
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

