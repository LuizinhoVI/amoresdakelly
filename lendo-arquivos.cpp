#include <iostream>
#include "stdlib.h"
#include <fstream>
#include "windows.h"

using namespace std;


int main(){
	
int escolha=0;	
		ifstream arquivo;

	cout <<"1) para ler arquivo" << endl ;
	cout <<"2) escrever arquivo" << endl;
		cin >> escolha;
	
	if(escolha==1){
		
		arquivo.open ("texto.txt", ifstream::in);
		
		char c = arquivo.get();
		
		
		
		while(arquivo.good()){
			
			cout<< c ;Sleep(1000); 
			
c = arquivo.get();			
		}
		//arquivo << " hello word ";
		
		arquivo.close();
		
	}
	
	
return 0; }
