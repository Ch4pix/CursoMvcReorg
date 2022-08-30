#include "Controller.h"
#include "TipoCuello.h"
#include "TipoManga.h"
#include "DTOHistorial.h"
#include <vector>

Controller::Controller()
{
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

