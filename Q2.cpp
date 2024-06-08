# include <iostream>
using namespace std;

int main(){
	//Definição das variáveis
	int alcool, gasolina,ag;
	
	//Solicitação para inserir os valores 
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
