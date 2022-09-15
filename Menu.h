/*
 * Log.h
 *
 *  Created on: 21 de ago. de 2022
 *      Author: Gill
 */
#ifndef MENU_H_
#define MENU_H_
#include <cstdlib>
#include <iostream>
#include "MonitorDeTemperatura.h"

using namespace std;

class Menu
{
public:
	void validaEntrada(int first, int last, int &opt);
	void validaEntrada(int &val);
	void validaEntrada(char &val);
	void validaEntrada(double &val);
	void validaEntrada(string &text);
	int principal();
	int salvarRecuperar();
	int monitorar(MonitorDeTemperatura &monitor);
	int controlar(MonitorDeTemperatura &monitor);
	void analisar();
	void limpaTela();
	void espera();
};
#endif
