/*
 * MonitoraTemperatura.h
 *
 *  Created on: 11 set. de 2022
 *      Author: Gill
 */
#ifndef  MONITORORDETEMPERATURA_H_
#define  MONITORORDETEMPERATURA_H_
#include <cstdlib>
#include <iostream>
#include "listaEstatica.h"
#include "Temperatura.h"

using namespace std;

class MonitorDeTemperatura{
    private:
        int intervalo;
        int quantidade;
        double maxTemp;
        double minTemp;
        Lista *listaTemp;
        unsigned short int statusControle;
        void controlarTemperatura(double atualTemp, Temperatura &simulador);

    public:
        MonitorDeTemperatura();
        void setIntervalo(int intervalo);
        void setQuantidade(int quantidade);
        void realizarLeitura(Temperatura &simulador);
        void imprimirLeituras();
        void imprimirAnalise();
        Lista *getListaTemp();
        void setListaTemp(Lista *novaLista);
        void limparLeituras();
        int getIntervalo();
        int getQuantidade();
        double getLimitMax();
        double getLimitMin();
        void setTempLimits(double min, double max);
};
#endif