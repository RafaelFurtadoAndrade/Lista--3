#include <iostream>
using namespace std;
int main(){
	//Definição das variáveis
	int gasolina, km, z;
	
	//Solicitação para o usuário inserir os valores 
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
