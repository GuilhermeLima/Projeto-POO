#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include <windows.h>

#include "ArquivosFontes.h"

/*
Autores: Guilherme Lima Santos -> 22215016-1
		 Gustavo Andretta Piedade -> 22115010-5
		 Rafael Serikaku -> 22215036-9
*/


using namespace std;

//fun��o de replace para trocar caracteres especiais dos arquivo layout
string replace(string& texto, const string& procurado, const string& troca) {
	int tamanho = procurado.length();
    int inicio_procurado = texto.find(procurado); //procura o local de inicio da string no vtor de char

    if(inicio_procurado == string::npos){ // verifcando se foi encontrado, se o npos retornar -1 significa que nada foi encontrado
        return string(texto);
	}

    //texto.replace(inicio_procurado, inicio_procurado, troca); // trocando o texto solicitado,
	texto.replace(inicio_procurado, tamanho ,  troca); 
	
    if(texto.find(procurado) != string::npos){ // verifica se ap�s a troca ainda h� mais alguma coisa
    	return replace(texto, procurado, troca); // chama a fun��o de novo
	}

    return string(texto); // retorna a string pronta
}

// contrutor da classe, o local por padr�o � o local aonde o programa est� arqmazenado
ArquivosFontes::ArquivosFontes(string _nome, string _extensao, string _local = ""){
	setNome(_nome); // setando nome do arquivo
	setExtensao(_extensao);//setando extens�o
	setLocal(_local); // setando local
}

void ArquivosFontes::setNome(string _nome){ // seta o nome do arquivo
	nome = _nome;
	setNomeInteiro(); // constroi o nome inteiro ap�s a altera��o do nome
}

void ArquivosFontes::setExtensao(string _extensao){ // seta a extens�o do arquivo
	extensao = _extensao;
	setNomeInteiro(); // constroi o nome inteiro ap�s a altera��o da extes�o
}

void ArquivosFontes::setLocal(string _local){ // seta o local do arquivo
	local = _local;
}

void ArquivosFontes::setNomeInteiro(){ // seta o nome inteiro [nome . extens�o] do arquivo
	nomeInteiro = nome + "." + extensao;
}

string ArquivosFontes::getNome(){ // mostra o nome do arquivo
	return nome;
}

string ArquivosFontes::getExtensao(){ // mostra a extens�o do arquivo
	return extensao;
}

string ArquivosFontes::getNomeInteiro(){ // mostra o nome inteiro [nome . extens�o] do arquivo
	return nomeInteiro;
}

string ArquivosFontes::getLocal(){ // mostra o local do arquivo
	return local;
}


/*
Fun��o que criara  arquivo utiizando o seu arquivo layout e trocando as variaveis especiais contidas nele
*/
int ArquivosFontes::criarArquivo(){
	string arquivo = getNomeInteiro(), linhas, layout = "layout/layout." + getExtensao();
	
	/*string arquivoo = getNome() + ".";
	string ext = getExtensao();
	
	strcat(arquivo, ext);
	
	char *caminho = "/cod_font";
	strcat(caminho, );*/
	
	std::ofstream novoArquivo(); // instancia da classe ofstream para manipular arquivos
	novoArquivo.open(arquivo.c_str()); // abrindo e criando arquivo

	ifstream arquivoLayout(layout.c_str()); // abrindo arquivo de layout
	if(arquivoLayout.is_open()){ // verificando se o arquivo layout est� aberto

		while( getline(arquivoLayout, linhas) ){ // percorando linhas do arquivo layout
		// gravando linha a linha e trocando conteudos especiais do arquivo layout
		  novoArquivo << replace(linhas, "nome_classe", getNome()) << endl;


		//Exibe cada liha sendo escrita no arquivo
		 cout<<"---> "<<linhas<<endl;
		 Sleep(500);//Timer na escrita, 0.5 segundos
		  
		}
		
		cout<<"\n";
		//fechando arquivo layout
		arquivoLayout.close();
	}

	else cout << "N�o foi possivel abrir o arquivo";

	//fechando novo arquivo
	novoArquivo.close();

   return 1;
}
