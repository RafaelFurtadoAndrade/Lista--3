using namespace std; 

int main () {
	cout<<setprecision (2) <<fixed;
	
	//Defini��o das vari�veis 
	float a,b;
	float soma,sub,mult,divi;
	
	
	cout<<"Digite o valor de a: "; 
	cin >> a;
	cout<<"Digite o valor de b: "; 
	cin >> b;
	
	//Opera��es aritmeticas 
	soma=a+b;
	sub=a-b;
	mult=a*b;
	
	if(b!=0)
	divi=a/b;
	else 
	cout<< "Nao e possivel dividir por zero "<<endl;
	//Resultado das opera��es
	
	cout<< "Soma:"<<soma<<endl;
	cout<< "subtra�ao: "<<sub<<endl;
	cout<<"multiplicacao: "<<mult<<endl;
	if (b != 0)
        cout << "Divis�o: " << divi << endl;
	
	return 0;
	
}
