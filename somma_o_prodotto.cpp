#include <iostream>
using namespace std;
int a,b,c;

main()
{
	cout<<"Cosa vuoi fare?"<<endl<<"1. Somma"<<endl<<"2. Moltiplicazione"<<endl;
	cin>>a;
	if(a==1)
	{
		cout<<"Inserisci il primo numero"<<endl;
		cin>>b;
	
		cout<<"Inserisci il secondo numero"<<endl;
		cin>>c;
	
		cout<<"La somma e': "<<b+c;
	}
	
	else
	{
		cout<<"Inserisci il primo numero"<<endl;
		cin>>b;
	
		cout<<"Inserisci il secondo numero"<<endl;
		cin>>c;
		
		cout<<"Il prodotto e': "<<b*c;
	}
}
