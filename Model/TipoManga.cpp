#include "TipoManga.h"
#include <string>
#include <vector>
#include "Caracteristica.h"

TipoManga::TipoManga()
{
	this->NombreCaracteristica = "Manga Corta";
	this->porcentaje = 0.9;
	this->stockv2 = 250;
}
void TipoManga::MangaLarga()
{

	NombreCaracteristica = "Manga Larga";
	this->porcentaje = 1;
	this->stockv2 = 250;
}

