# include <iostream>
using namespace std ;

int main () {
	//Definição das Variáveis
	int a, b ;
	
	//Solicitação para o usuário digitar a senha 
	cout <<"Digite a senha" ;
	cin>> a ;
	
	b=1234;
	
	
	//Definição da senha correta
	if ( a==b ) {
		cout<<"A senha esta correta";
	}else if ( a!= b){
		cout<<"A senha esta incorreta";
	}
	return 0;
}
