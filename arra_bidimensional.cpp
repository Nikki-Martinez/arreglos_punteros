#include <iostream>
using namespace std;

main(){
	int fila=0, columna= 0;
	
	cout << "Ingrese filas: ";
	cin >> fila;
	cout << "Ingrese columnas: ";
	cin >> columna;
	int matriz[fila][columna];
	cout << "----------Ingresar----------" << endl;
	
	for (int i=0; i<fila;i++){
		for(int j=0;j<columna;j++){
			cout << i << ","<<j<<": ";
			cin >> matriz[i][j];
		}
		cout << "--------------------------" << endl;
	}
	
	
	

	system("pause");
}
