using namespace std; 

int main () {
	cout<<setprecision (2) <<fixed;
	
	//Definição das variáveis 
	float a,b;
	float soma,sub,mult,divi;
	
	
	cout<<"Digite o valor de a: "; 
	cin >> a;
	cout<<"Digite o valor de b: "; 
	cin >> b;
	
	//Operações aritmeticas 
	soma=a+b;
	sub=a-b;
	mult=a*b;
	
	if(b!=0)
	divi=a/b;
	else 
	cout<< "Nao e possivel dividir por zero "<<endl;
	//Resultado das operações
	
	cout<< "Soma:"<<soma<<endl;
	cout<< "subtraçao: "<<sub<<endl;
	cout<<"multiplicacao: "<<mult<<endl;
	if (b != 0)
        cout << "Divisão: " << divi << endl;
	
	return 0;
	
}
