#include <iostream>
#include <cstdlib>
#include <string>

#include "ArquivosFontes.h"

/*
Autores: Guilherme Lima Santos -> 22215016-1
		 Gustavo Andretta Piedade -> 22115010-5
		 Rafael Serikaku -> 22215036-9
*/


using namespace std;

int main(int argc, char** argv) {

	string nomeClasse, linguagem;
	int numLinguagem;

	cout << "Informe o nome da classe: " << endl;
	cin >> nomeClasse;

	cout << "Escolhe uma das linguagens a abaixo: " << endl;
	cout << "(1) Javascript" << endl;
	cout << "(2) Python" << endl;
	cout << "(3) C++" << endl;

	cin >> numLinguagem;

	switch(numLinguagem){
		case 1:
			linguagem = "js";
		break;
		case 2:
			linguagem = "py";
		break;
		case 3:
			linguagem = "cpp";
		break;
		default: 
			linguagem = "js";
	}

	ArquivosFontes arquivos(nomeClasse, linguagem, "");
	
	arquivos.criarArquivo();
	//arquivos.print(); 

	system("PAUSE");
	return 0;
}
