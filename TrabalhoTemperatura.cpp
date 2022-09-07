#include <iostream>
#include <chrono>
#include<windows.h>

#include "listaEstatica.h"
#include "Temperatura.cpp"
#include <fstream>

using namespace std;

int main() {
	Temperatura t; //Cria um objeto t da classe Temperatura
	fstream escreve; //
	string line;
	string filePath = ".\\logs\\new-log.csv"; //Neste caso a pasta log deverá existir
	double temp;

	//Data e hora local
	time_t data = time(nullptr);
	char mbstr[100]; //string para receber data e hora formatada

	strftime(mbstr,sizeof(mbstr),"%A %c", localtime(&data));//https://en.cppreference.com/w/cpp/chrono/c/strftime

//	escreve.open(filePath,fstream::in | fstream::out | fstream::app);
	escreve.open(filePath,fstream::out);
	cout << "Trabalho Temperatura VSCode"<<endl;
	if(escreve){
		t.inicializa(); // Inicializa a simulacao
			cout << t.enviarComando(RES_OFF) << endl; // Aciona o resistor
			for (int i = 0; i < 50; ++i) {
				temp = t.lerTemp();
				cout << temp <<'\t'<<"RES_OFF"<< endl; // Ler a temperaturda
				line = "\""+to_string(temp)+"\";\""+"RES_OFF"+"\"";
				line = line.replace(line.find('.'),1,1,',');//substituicao de . por , melhor visualizaco em excel pt-br
				escreve << line << endl;
				Sleep(50);
		//		this_thread::sleep_for(chrono::milliseconds(1000)); // Aguarda
			}
			escreve.close();
			cout << "Arquivo salvo em : "<<filePath<<endl;//.replace(filePath.find("\\"),2,"\\")
	}else{
		cout << "Nao foi possivel abrir arquivo"<<endl<<escreve.rdstate()<<endl;
	}

	cout << "Data: "<<mbstr<<endl;
	return EXIT_SUCCESS;
}
