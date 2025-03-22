#include <iostream>
using namespace std;

int main(){
	//arrray = arreglo, coleccion o matriz
	//Se utilizan para almacenar varios valores en una sola variable
	
	int notas[4]; // indice o posición del arreglo inicia en 0
	
	notas[0]= 80;
	notas[1]= 65;
	notas[2]= 60;
	notas[3]= 75;
	
	cout << notas[0] << endl;
	cout << notas[1] << endl;
	cout << notas[2] << endl;
	cout << notas[3] << endl;	
	
	notas[1] = 90;
	cout << "nota modificada: " << notas[1] << endl;
	
	
	cout << "------------------------------" << endl;
	//inicializando desde el principio
	int notass[4]= {80, 65, 60, 75};
	
	cout << notass[0] << endl;
	cout << notass[1] << endl;
	cout << notass[2] << endl;
	cout << notass[3] << endl;
	
	cout << "------------------------------" << endl;
	
	//recorrer array con for
	
	int nota[4];
	nota[0]= 80;
	nota[1]= 65;
	nota[2]= 60;
	nota[3]= 75;
	for(int i; i < 4;i++){
		cout << i << nota[i] << endl;
	}
	cout << "______________" << endl;
	for(int i = 0; i < 4; i++) {  // Iteración
        cout << "Nota " << i + 1 << ": " << nota[i] << endl;
	}
	cout << "______________" << endl;
	
	for(int i:nota){
		cout << i << endl;
	}
	
	system("pause");
}
