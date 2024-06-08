#include <iostream>
using namespace std;

int main(){
	char caractere;
	
	cout<< "Digite um caractere:" ;
	cin>> caractere;
	
	//converter caractere em minusculo
	
	caractere = tolower (caractere);
	
	switch (caractere){
	
	case 'a':
	case 'e':
	case 'i':
	case 'o':	
	case 'u':
	
	cout<< caractere << " e uma vogal :" <<endl;
	break;
	default:
	cout<< caractere << " nao e uma vogal :" << endl;
	break;
	}

return 0;
}
