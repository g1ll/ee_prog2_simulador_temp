/*
 * Log.h
 *
 *  Created on: 21 de ago. de 2022
 *      Author: Gill
 */
#ifndef  GERENCIADOR_H_
#define  GERENCIADOR_H_
#include <cstdlib>
#include <iostream>
#include "Temperatura.cpp"
#include "Log.cpp"
#include "MonitorDeTemperatura.cpp"
#include "Menu.cpp"

using namespace std;

class Gerenciador{
	private:
	Temperatura simulador;
	Log *log;
	MonitorDeTemperatura monitor;
    Menu menu;
	
	public:
	Gerenciador();
	void iniciar();
	void monitorar();
	void arquivar();
	void controlar();
};
#endif
