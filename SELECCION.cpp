#include <iostream>
using namespace std;
main(){
	
	//si la condicion es verdadera el ciclo se sigue ejecutando
	int i = 0;
	while (i<5){
		i++;
		cout<<"while: "<<i<<endl;	
	}
	
	/*
	int i = 5;
	int i = 5;
	while (i>0){
		i--;
		cout<<i<<endl;	
	}
    
	
	int ii = 0;
	do{
		cout<<"do while: "<<ii<<endl;
		ii++;
	}while(ii<5);
	*/
	
	char respuesta ='s';
	
	while (respuesta == 's' || respuesta == 'S'){
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	}
	system ("pause");
}
