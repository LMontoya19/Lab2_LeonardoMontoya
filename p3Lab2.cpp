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
				double PI;
				PI = M_PI;
				double lado1,lado2,lado3,angulo1,angulo2,angulo3,s,area;
      				cout<<"Ingrese primera dimension del triangulo"<<endl;
				cin>>lado1;
				cout<<"Ingrese segunda dimension del triangulo"<<endl;
                                cin>>lado2;
				cout<<"Ingrese tercera dimension del triangulo"<<endl;
                                cin>>lado3;
				if((lado1*lado1==lado2*lado2+lado3*lado3)||(lado2*lado2==lado1*lado1+lado3*lado3)||
						(lado3*lado3==lado2*lado2+lado1*lado1)){
					cout<<"El triangulo es recto"<<endl;
				}else{
					cout<<"El triangulo no es recto"<<endl;
				}
				angulo1 = acos(((lado2*lado2)+(lado3*lado3)-(lado1*lado1))/(2*lado2*lado3))* 180.0/PI;
				angulo2 = acos(((lado1*lado1)+(lado3*lado3)-(lado2*lado2))/(2*lado1*lado3))* 180.0/PI;
				angulo3 = acos(((lado1*lado1)+(lado2*lado2)-(lado3*lado3))/(2*lado1*lado2))* 180.0/PI;
				cout<<"Medida de angulos:"<<endl;
				cout<<" *"<<angulo1<<endl;
				cout<<" *"<<angulo2<<endl;
				cout<<" *"<<angulo3<<endl;
				s = (lado1+lado2+lado3)/2;
				area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
				cout<<"Area del Triangulo: "<<area<<endl;
      				break;
			case 'c'  :
				int num,contador2;	
				contador2=0;
				cout<<"Ingrese numero: "<<endl;
				cin>>num;
				for(int i=1;i<num;i++){
					if(num%i==0){
						if(i%2==0){
                                		}else{
                                        	if(i+1<num){
                                        		cout<<"(("<<num<<"+"<<i<<")/"<<i<<") + ";
							contador2+=(num+i)/i; 
                                        	}else{
                                        		cout<<"(("<<num<<"+"<<i<<")/"<<i<<") = ";
							contador2+=(num+i)/i;
                                        	}
                                		}
                               		 }	

				}
				 cout<<"(("<<num<<"+"<<num<<")/"<<num<<")=";
                                 contador2+=(num+num)/num;
				 cout<<contador2<<endl;

				break;
			case 'd'  :
				resp='n';
				break;
   			default : 
      			cout<<"opcion no valida"<<endl;
		}
	}


	return 0;
}
