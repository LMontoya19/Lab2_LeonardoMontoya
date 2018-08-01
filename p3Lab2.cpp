#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
	char resp='s';
	while (resp=='s'){
		cout<<"***MENU***"<<endl;
		cout<<"a)Ejercicio 1"<<endl;
		cout<<"b)Ejercicio 2"<<endl;
		cout<<"c)Ejercicio 3"<<endl;
		cout<<"d)Salir"<<endl;
		cout<<"Ingrese su opcion: ";
		char opcion;
		cin >> opcion;
		switch(opcion) {
   			case 'a'  :
      				cout<<"Ingrese cantidad de cubos a calcular:"<<endl;
				int calcularc;
				int contador;
				contador=1;
				cin>>calcularc;
				int suma;
				
				for(int i=1;i<=calcularc;i++){
					suma=0;
					cout<< i<<"^3=";
					for(int j=0;j<i;j++){
						if(j+1<i){
						cout<<contador<<"+";
						suma+= contador;
						contador+= 2;
						}else{
						cout<<contador;
						suma+= contador;
						contador+= 2;
						}
					}
					cout<<"="<<suma<<endl;
					
				}
      				break;
   			case 'b'  :
				double lado1,lado2,lado3,angulo1,angulo2,angulo3,s,area;
      				cout<<"Ingrese primera dimension del trinagulo"<<endl;
				cin>>lado1;
				cout<<"Ingrese segunda dimension del triangulo"<<endl;
                                cin>>lado2;
				cout<<"Ingrese tercera dimension del trinagulo"<<endl;
                                cin>>lado3;
				angulo1 = acos(((lado2*lado2)+(lado3*lado3)-(lado1*lado1))/(2*lado2*lado3));
				angulo2 = acos(((lado1*lado1)+(lado3*lado3)-(lado2*lado2))/(2*lado1*lado3));
				angulo3 = acos(((lado1*lado1)+(lado2*lado2)-(lado3*lado3))/(2*lado1*lado2));
				
      				break;
			case 'c'  :
				cout<<"3"<<endl;
				break;
			case 'd'  :
				cout<<"4"<<endl;
				resp='n';
				break;
   			default : 
      			cout<<"opcion no valida"<<endl;
		}
	}


	return 0;
}
