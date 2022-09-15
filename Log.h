/*
 * Log.h
 *
 *  Created on: 21 de ago. de 2022
 *      Author: Gill
 */
#ifndef LOG_H_
#define LOG_H_
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "listaEstatica.h"

using namespace std;

class Log {
private:
		string basePath;
		string filePath;
		fstream logFile; //
public:
	Log(string basePath, string path = "");
	virtual ~Log();
	void write(string conteudo); //salva o arquivo com o nome e no diretorio definido em pathFile
	void setFilePath(string path);
	string getFilePath();
	bool isOpen();
	Lista * load();
	bool openToWrite();
	bool openToRead();
	void save();
	bool openToWrite(string filePath);
	void saveData(Lista *list);
};

#endif /* LOG_H_ */
