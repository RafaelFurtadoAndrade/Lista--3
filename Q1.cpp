#include <iostream>
using namespace std;
int main(){
	//Defini��o das vari�veis
	int gasolina, km, z;
	
	//Solicita��o para o usu�rio inserir os valores 
	cout << "digite a quantidade de kilometros" ;
	cin >> gasolina;
	
	cout <<"digite a quantidade de  litros de gasolina" ;
	cin >>km,
	
	//km/l
	z=km/gasolina;
	
	//Consumo de Kilometros por litro
	cout << "O consumo em kilometros por litros e: " << z <<  endl;
	
	return  0;
	

	
}
