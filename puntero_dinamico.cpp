#include <iostream>
using namespace std;

main(){
/*	int edad, *p_edad;
	p_edad = &edad;
	cout << "Ingrese la edad: " ;
	cin >> edad;
	cout << *p_edad << endl; 
	
	if(*p_edad >18){
		
		cout << "Mayor de edad" << endl;
	}else{
		cout << "Menor de edad" << endl;
	}*/
	
	/*int total = 0;
	int notas[total];
	int *p_notas = notas;
	char res;
	
	do{
		cout << "Ingrese nota " << total <<": ";
		cin >> notas [total];
		total++;
		cout << "Desea ingresar otra nota (s/n)?:  ";
		cin >> res;
	}while(res =='s' || res == 'S');
	
	cout << "----------Mostrar Notas----------" << endl;

	for (int i = 0; i < total; i++){
		cout << "Nota (" << i<< "): " << *p_notas << endl; 
		*p_notas++;
	}*/

// punteros con asignación de memoria dinamica
// new = reservar un espacio de memoria
//delete[] = liberar la memoria

	/*int total = 0, *p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout << "Ingrese nota " << total <<": ";
		cin >> p_notas[total];
		total++;
		cout << "Desea ingresar otra nota (s/n)?:  ";
		cin >> res;
	}while(res =='s' || res == 'S');
	
	cout << "----------Mostrar Notas----------" << endl;

	for (int i = 0; i < total; i++){
		cout << "Nota (" << i<< "): " << *p_notas << endl; 
		*p_notas++;
	}

	delete[] p_notas;*/
	
	int fil = 0, col = 0, **pm_notas;
	cout << "Ingrese la cantidad de estudiantes: " ;
	cin >> fil;
	cout << "Ingrese la cantidad notas por estudiantes: ";
	cin >> col;
	
	pm_notas = new int *[fil];
	for(int i = 0; i < fil; i++){
		pm_notas[i] = new int[col];
	}
	
	for(int i=0; i < fil; i++){
		cout << "__________Estudiante__________" << i << endl;
		for(int j=0; j < col; j++){
			cout << "Nota " << j <<": ";
			cin >> *(*(pm_notas+i)+j);
		}
	
	cout << "____________________" << endl;
	}
	cout << "----------Mostrar Notas----------" << endl;
	for(int i=0; i < fil; i++){
		cout << "__________Estudiante__________ " << i << endl;
		for(int j=0; j < col; j++){
			cout << *(*(pm_notas+i)+j);
		}
	cout << "__________________________________" << endl;
	}
	system("pause");
		
}
