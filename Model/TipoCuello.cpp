#include "TipoCuello.h"
#include <string>

TipoCuello::TipoCuello()
{
	this->stockv2 = 500;
	this->porcentaje = 1.03;
	this->NombreCaracteristica = "Camisa cuello Mao";
}
void TipoCuello::CuelloNormal()
{
	this->stockv2 = 500;
	this->porcentaje = 1;
	this->NombreCaracteristica = "Camisa cuello Normal";
}
