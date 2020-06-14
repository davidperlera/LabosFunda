#include "iostream"

using namespace std;

int cnumero(int);//funcion a utilizar

int main(){

int nummagico=12,op,prb;//se le solicta al usuario ingresar la opcion que quiera
cout<<"1) jugar"<<endl;
cout<<"2) salir"<<endl;
cout<<"ingresar opcion: ";
cin>>op;



switch(op){// un switch para trabajar con la opcon ingresada

case 1:
cout<<"tienes 5 intentos"<<endl;
cnumero(prb);
break;

default:
break;
}

}


int cnumero(int prb){//funcion a utilizar en caso de que decida jugar

int numeromagico=12,x,i;

for(i=5; i>0;i--)//un for con las diferentes opciones 
{

cout<<"ingresar numero: ";
cin>>prb;
//se utiliza  if para los diferentes casos que puedan ocurrir
if(prb==numeromagico)

    {
    cout<<"Haz ganado"<<endl;
    break;
     }

    if(prb>12)
     {
    cout<<"numero incorrecto, el numero que buscas es menor al ingresado"<<endl;
    cout<< "intentos restantes"<<i-1<<endl;
     }
    if(prb<12)
    {

    cout<<"numero incorrecto,el numero que buscas es mayor al ingresado"<<endl;
      cout<< "intentos restantes"<<i-1<<endl; 
    }
}
if(i=1){

    cout<<"sin intentos"<<endl;
}
}