#include <iostream>
using namespace std;

main(){
	int  edad = 20 , *p_edad;
	p_edad = &edad;
	
	cout << "Edad: " << edad << endl;
	cout << "Puntero Edad: " << &p_edad << endl;
	cout << "Puntero Edad: " << *p_edad << endl;
	
	cout << "-----Cambio de valores-----" << endl;
	*p_edad = 40;
	
	cout << "Edad: " << edad << endl;
	cout << "Puntero Edad: " << &p_edad << endl;
	cout << "Puntero Edad: " << *p_edad << endl;
	
	cout << "-----Otros valores-----" << endl;
	int edad2 = 100
	*p_edad = &edad2;
	
	cout << "Edad: " << edad << endl;
	cout << "Puntero Edad: " << &p_edad << endl;
	cout << "Puntero Edad: " << *p_edad << endl;
	
	system("pause");
}
