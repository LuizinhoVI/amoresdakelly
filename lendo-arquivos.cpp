#include <iostream>
#include "stdlib.h"
#include <fstream>
#include "windows.h"

using namespace std;


int main(){
	
int escolha=0;	
		ifstream arquivo;
while(true){

	cout <<"1)  ler arquivo" << endl ;
	cout <<"2) escrever dentro do arquivo" << endl;
cout <<"3) sair do programa" << endl;
		cin >> escolha;
	
	if(escolha==1){
		
		arquivo.open ("texto.txt", ifstream::in);
		
		char c = arquivo.get();
		
		
		
		while(arquivo.good()){
			
			cout<< c ;Sleep(100); 
			
			c = arquivo.get();
					
		}
		//arquivo << " hello word ";
		
		arquivo.close();
		
	}
	
if(escolha==3){
	break;
}}
return 0; }
