#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

/*
Autores: Guilherme Lima Santos -> 22215016-1
		 Gustavo Andretta Piedade -> 22115010-5
		 Rafael Serikaku -> 22215036-9
*/

using namespace std;

class ArquivosFontes{
	private:
		string nome; // nome do arquivo que vai ser criado
		string extensao; // exten~soa do arquivo
		string nomeInteiro; // variavel que guarda o nome com a extensão ex: teste.js
		string local; // local aonde será guardado o arquivo
		
		void setNomeInteiro(); // seta o nome inteiro [nome . extensão] do arquivo
		
	public:
		// contrutor da classe, o local por padrão é o local aonde o programa está arqmazenado
		ArquivosFontes(string, string, string);
		
		void setNome(string _nome); // seta o nome do arquivo
		
		void setExtensao(string); // seta a extensão do arquivo

		void setLocal(string); // seta o local do arquivo
	
		string getNome(); // mostra o nome do arquivo
		
		string getExtensao(); // mostra a extensão do arquivo
		
		string getNomeInteiro(); // mostra o nome inteiro [nome . extensão] do arquivo

		string getLocal(); // seta o local do arquivo
		
		/*
		Função que criara  arquivo utiizando o seu arquivo layout e trocando as variaveis especiais contidas nele
		*/
		int criarArquivo();
};













