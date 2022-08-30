
#include <vector>
#include <string>
#ifndef  DTOHISTORIAL_H	
#define DTOHISTORIAL_H



#pragma once
using namespace std;

class DTOHistorial
{
public:
	string prenda;
	vector<DTOHistorial> DtoVec;
	double preciuni;
	double total;
	string calidad;
};
#endif
