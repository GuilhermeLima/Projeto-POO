#include <iostream>
#include <cstdlib>
#include <string>

#include "ArquivosFontes.h"
#include "Menu.h"

/*
Autores: Guilherme Lima Santos -> 22215016-1
		 Gustavo Andretta Piedade -> 22115010-5
		 Rafael Serikaku -> 22215036-9
		 Fernando Frezza do Prado -> 22215018-7
*/

void criarClasse(string nomeClasse, string linguagem){
	ArquivosFontes arquivos(nomeClasse, linguagem, "");

	arquivos.criarArquivo();
}

using namespace std;

int main(int argc, char** argv) {

	string nomeClasse, linguagem;
	int numLinguagem, conceito;

	Menu mn("Escolha um conceito: ");
	string menu_geral[4] = {"  ", "(1) Classe", "  ", "(2) Construtor"};
	string menu_classe[4] = {"(1) Javascript", "(2) Python", "(3) C++", "ola que tal"};

	mn.setItens(menu_geral);
	mn.setSubItens(1, menu_classe);

	mn.getNome();
	mn.getItens();
	cin >> conceito;

	switch(conceito){
		case 1:
			cout << "Informe o nome da classe: " << endl;
			cin >> nomeClasse;
			
			cout << "Escolha uma das linguagens: " << endl;
			mn.getSubItens(1);
			cin >> numLinguagem;
			
			switch(numLinguagem){
				case 1:
					linguagem = "js";
				break;
				case 2:
					linguagem = "py";
				break;
				case 3:
					linguagem = "js";
				break;
				default:
					linguagem = "js";
			}
			
			criarClasse(nomeClasse, linguagem);
	
		break;
		case 2:
			cout << "Ainda nao tem" << endl;
			break;
		default:
			mn.getSubItens(1);
	}

	system("PAUSE");
	return 0;
}
