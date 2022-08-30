#ifndef OPCIONDEMENU_COTIZAR_H
#define OPCIONDEMENU_COTIZAR_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Caracteristica.h"
#include "Prenda.h"
#include "TipoCuello.h"
#include "TipoManga.h"
#include "Chupin.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Cotizacion.h"




#pragma once
class OpcionDeMenu_Cotizar
{
public:
	Prenda prenda;
	Cotizacion cotizacion;
public:
	OpcionDeMenu_Cotizar();
	void Seleccionar();
	void setCPrenda(Prenda prenda);
	Prenda getCPrenda();
	void setCCotizacion(Cotizacion cotizacion);
	Cotizacion getCCotizacion();

};
#endif 

