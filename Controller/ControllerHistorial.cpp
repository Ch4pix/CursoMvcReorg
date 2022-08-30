#include "ControllerHistorial.h"
#include <vector>
#include "TipoCuello.h"
#include "TipoManga.h"
#include "DTOHistorial.h"
#include <vector>


vector <DTOHistorial> ControllerHistorial::ctrHistorial(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion)
{
	system("cls");
	vector <DTOHistorial>historial;
	for (int i = 0; i < _prenda.size(); i++)
	{
		dtohistorial.prenda = _prenda[i].getPrenda();
		dtohistorial.preciuni = _prenda[i].getPrecioUnitario();
		dtohistorial.total = _cotizacion[i].CotizarTotal(_prenda[i]);
		dtohistorial.calidad = _prenda[i].getCalidad();
		historial.push_back(dtohistorial);
	}
	return historial;
}

