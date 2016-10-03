#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Menu{
	private:
		string nome;
		string itens[10], subItens[10][10];
		int numItens;
		
	public:
		Menu(string = "");
		void setItens(string []);
		void setSubItens(int, string []);
		void setNome(string = "");
		
		void getMenu();
		void getItens();
		void getSubItens(int);
		void getNome();
};
