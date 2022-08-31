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
void Controller::setCPrenda(Prenda _prenda)
{
	this->prenda = _prenda;
}
Prenda Controller::getCPrenda()
{
	return prenda;
}
void Controller::setCCotizacion(Cotizacion _cotizacion)
{
	this->cotizacion = _cotizacion;
}
Cotizacion Controller::getCCotizacion()
{
	return cotizacion;
}
DTOHistorial Controller::DatosCotizacion(Prenda _prenda, Cotizacion _cotizacion)
{
	DTOHistorial dtohistorial;
	dtohistorial.prenda = _prenda.getPrenda();
	dtohistorial.preciuni = _prenda.getPrecioUnitario();
	dtohistorial.total = _cotizacion.CotizarTotal(_prenda);
	dtohistorial.calidad = _prenda.getCalidad();

	return dtohistorial;
}


