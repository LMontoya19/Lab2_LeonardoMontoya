#include <iostream>
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
		cout<<"Ingrese su opcion";
		char opcion;
		cin >> opcion;
		switch(opcion) {
   			case 'a'  :
      				cout<<"1"<<endl;
      				break;
   			case 'b'  :
      				cout<<"2"<<endl;
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
