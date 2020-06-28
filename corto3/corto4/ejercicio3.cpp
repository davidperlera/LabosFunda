#include<iostream>
using namespace std;

int main(){
	int estudiante;
	float suma;
	cout << "Ingrese la cantidad de estudiantes: ";
	cin >> estudiante;
	int notas[estudiante][5];
	for (int i = 0; i < estudiante; i++){
		for (int j = 0; j < 5; j++){
			cout << "Ingresar notas estudiante " << i+1 << " : ";
			cin >> notas[i][j];
		}
	}


	for (int i = 0; i < estudiante; i++){
		for (int j = 0; j < 5; j++){
		suma+= notas[i][j]*0.20;
	}
  }

	for (int i = 0; i < estudiante; i++){
		cout<<"estudiante"<<i+1;
		cout<<"la nota del estudiante es"<<suma<<endl;
		if(suma<6){
			cout<<"reprobo"<<endl;
		}
		else{

			cout<<"aprobo"<<endl;
		}
  }
	return 0;
}