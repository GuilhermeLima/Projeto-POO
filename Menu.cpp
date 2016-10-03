#include <iostream>
#include <cstdlib>
#include <string>

#include "Menu.h"

using namespace std;

int slength(string v []){ 
	return sizeof(v) / 2; 
}

Menu::Menu(string nome){
	setNome(nome);
}

void Menu::setNome(string _nome){
	nome = _nome;
}

void Menu::getNome(){
	cout << nome << endl;
}

void Menu::setItens(string v[]){

	numItens = slength(v);
	cout << numItens << endl;
	itens[numItens];
	subItens[numItens];
	
	for(int i = 0; i < numItens; i++){
		itens[i] = v[i];
	}
}

void Menu::getItens(){
	for(int i = 0; i < numItens; i++){
		cout << itens[i];
	}
	cout << endl;
}

void Menu::setSubItens(int indice, string v[]){
	
	int tamanho = slength(v);
	
	subItens[indice][tamanho];
	
	for(int i = 0; i < tamanho; i++){
		subItens[indice][i] = v[i];
	}
}

void Menu::getSubItens(int indice){
	int tamanho = slength(subItens[indice]);
	for(int i = 0; i < tamanho; i++){
		cout << subItens[indice][i] << "\n";
	}
	cout << endl;
}
