# include <iostream>
using namespace std;

int main(){
	//Defini��o das vari�veis
	int alcool, gasolina,ag;
	
	//Solicita��o para inserir os valores 
	cout<<"Digite a quantidade de alcool:"; 
	cin>> alcool;
	
	cout<<"Digite a quantidade de gasolina:" ;
	cin>> gasolina;
	
	//alcool/gasolina
	ag=alcool/gasolina;
	
	if ( ag <0.7 ){
	cout<<"abasteca com alcool:"<< endl;
	}
	else{
	cout<<"abasteca com gasolina:"<< endl;
	}
	system("pause");
	return 0;
		
}
