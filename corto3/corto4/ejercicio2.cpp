#include "iostream"

using namespace std;

float media(int a[]);

void arrbajo(int a[],int x, int& conta,int& contb);

int main(){
int stturas[25], media1, arr, bajo;

    for(int i=1;i<=25;i++){
    cout<<"ingrese la estatura del estudiante "<<i<<":";
    cin>>stturas[i];
    }

    cout<<"el promedio de las esaturas es: "<<media(stturas)<<endl;

media1 =media(stturas);
arrbajo(stturas,media1,arr,bajo);

cout<<"la cantidad de  estudiantes arriba de la media son : "<< arr<<endl;
cout<<"la cantidad de estudiantes abajo de la media son: "<<bajo<<endl;

return 0;
}



float media(int a[]){
float media, cont=0;
for(int i=1;i<=25;i++){
    cont+=a[i];}
media = cont/25;
return media;
}

void arrbajo(int a[], int x, int& conta,int& contb){
conta=0;
contb=0;
for(int i=1;i<=25;i++){
if(a[i]>x){
    conta++;
}
else{
    contb++;
}
}
}
