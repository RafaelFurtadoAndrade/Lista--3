# include <iostream>
using namespace std ;

int main () {
	//Defini��o das Vari�veis
	int a, b ;
	
	//Solicita��o para o usu�rio digitar a senha 
	cout <<"Digite a senha" ;
	cin>> a ;
	
	b=1234;
	
	
	//Defini��o da senha correta
	if ( a==b ) {
		cout<<"A senha esta correta";
	}else if ( a!= b){
		cout<<"A senha esta incorreta";
	}
	return 0;
}
