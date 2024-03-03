#include <iostream>
using namespace std;
main (){
	// i++, i+= 1, i=i+1

	for (int i = 0; i<=10; i++){// variable inicio; finaliza; incrementar o decrementar
	
	if (i==5){
		continue;
		cout<<"if"<<endl;
		break;
	}
	  cout<<i<<endl;
	}
	 
	 cout<<"fuera del for"<<endl;
	
	
	for(float i=0; i<1; i+=0.1){
		cout<<i<<endl;
	}
	
	cout<<"datos"<<endl;
	
	//int 4 bytes
	int tam=0;
	int datos[] = {10,40,100,250,3000};
	cout<<sizeof(datos) / sizeof(datos[0]);
	
	/* 
	for (int i=0;i<5;i++);
	cout<<datos[i]<<endl;
	system ("pause");
	*/
	
	
	cout<<"Tablas de multiplicar"<<endl;
	int tabla = 0, res = 0;
	
	cout<<"Ingrese tabla: ";
	cin>>tabla;
	for(int i=1; i<=10; i++){
		res = tabla * i;
		cout<<tabla<<"X"<<i<<" = "<<res<<endl;
	}
	
	
	int inicio = 0, final = 0, rango =0;
	
	cout<<"Ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>final;
	
	for (int rango=inicio;rango<=final; rango ++){
		cout<<"tabla del "<<rango<<endl;
		for(int i=1; i<=10; i++){
		res = rango * i;
		cout<<rango<<"X"<<i<<" = "<<res<<endl;
	}
	
	}
	
}
