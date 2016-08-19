#include <iostream>
#include <cstdlib>
#include <string>

#include "ArquivosFontes.h"

using namespace std;

int main(int argc, char** argv) {

	string nomeClasse, linguagem;
	int numLinguagem;

	cout << "Informe o nome da classe: " << endl;
	cin >> nomeClasse;

	cout << "Escolhe uma das linguagens a abaixo: " << endl;
	cout << "(1) js" << endl;
	cout << "(2) ainda nao fiz" << endl;
	cout << "(3) ainda nao fiz" << endl;

	cin >> numLinguagem;

	switch(numLinguagem){
		case 1:
			linguagem = "js";
		break;
		case 2:
			linguagem = "js";
		break;
		case 3:
			linguagem = "js";
		break;
		default: 
			linguagem = "js";
	}

	ArquivosFontes arquivos(nomeClasse, linguagem);
	
	arquivos.criarArquivo();
	//arquivos.print(); 

	system("PAUSE");
	return 0;
}
