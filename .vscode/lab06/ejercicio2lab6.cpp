#include "iostream"

using namespace std;

int main(){
int tamaño=0,count=0,i,t;
cout<<"ingrese un numero entero:"<<endl;
cin>>t;
cout<<"ingrese el tamaño de su arreglo"<<endl;
cin>>tamaño;

int arreglo[tamaño];
for(i=0;i<tamaño;i++){
cout<<"ingrese el elemento "<<i<<" del arreglo: ";
cin>>arreglo[i];
if(t==arreglo[i]){
count++;}
}
cout<<"cantidad de veces que se repite el numero entero: "<<count<<endl;
return 0;
}
