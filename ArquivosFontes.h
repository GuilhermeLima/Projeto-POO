#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

/*
Autores: Guilherme Lima Santos -> 22215016-1
		 Gustavo Andretta Piedade -> 22115010-5
		 Rafael Serikaku -> 22215036-9
		 Fernando Frezza do Prado -> 22215018-7
*/

using namespace std;

class ArquivosFontes{
	private:
		string nome; // nome do arquivo que vai ser criado
		string extensao; // exten~soa do arquivo
		string nomeInteiro; // variavel que guarda o nome com a extens�o ex: teste.js
		string local; // local aonde ser� guardado o arquivo
		
		void setNomeInteiro(); // seta o nome inteiro [nome . extens�o] do arquivo
		
	public:
		// contrutor da classe, o local por padr�o � o local aonde o programa est� arqmazenado
		ArquivosFontes(string, string, string);
		
		void setNome(string _nome); // seta o nome do arquivo
		
		void setExtensao(string); // seta a extens�o do arquivo

		void setLocal(string); // seta o local do arquivo
	
		string getNome(); // mostra o nome do arquivo
		
		string getExtensao(); // mostra a extens�o do arquivo
		
		string getNomeInteiro(); // mostra o nome inteiro [nome . extens�o] do arquivo

		string getLocal(); // seta o local do arquivo
		
		/*
		Fun��o que criara  arquivo utiizando o seu arquivo layout e trocando as variaveis especiais contidas nele
		*/
		int criarArquivo();
};













