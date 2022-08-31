#include "TipoPantalon.h"
#include <string>
#include <vector>
#include "Caracteristica.h"

TipoPantalon::TipoPantalon()
{
	this->NombreCaracteristica = "Pantalon TipoPantalon";
	this->porcentaje = 0.88;
	this->stockv2 = 750;
}
void TipoPantalon::NoChupin()
{
	this->NombreCaracteristica = "Pantalon Normal";
	this->porcentaje = 1;
	this->stockv2 = 750;
}


