#include "iostream"


using namespace std;

float salarior(float x);// declaramos el nombre de la funcion que vamos utilizar


int main(){

 int ndeempleados,hnormal,hextra;

cout<<"ingrese el total de empleados: ";
cin>>ndeempleados;
cout<<endl;
//utilizo un for para que el usuario ingrse la cantidad de empleados y las horas realizadas
for(int i=1;i<=ndeempleados;i++){

    cout<<"empleado"<<i<<endl;
cout<<"ingrese horas trabajadas"<<i<<":";  cin>>hnormal;
cout<<"ingrese horas extras"<<i<<":";      cin>>hextra;
cout<<endl;

float ttl;
ttl=(hnormal*1.75)+(hextra*2.50); // se calcula el salario total


cout<<"salario total: "<<ttl<<"$"<<endl;
cout<<"salario real: "<<salarior(ttl)<<"$"<<endl;

}

return 0;

}

float salarior(float x){//funcion a utilizar para el salario real

float afp,ss,impues,sr;
//se calcula el total de descuento
ss=x*0.04;
afp=x*0.0625;
impues=x*0.10;

if (x>500){//un if para realizar el descuento de impuesto a la reanta en caso de que el salario sea mayor a 500

    sr=((x-afp))-ss-impues;
}
else{//en caso contrario se calculan los descuento normales

    sr=(x-afp)-ss;
}
return sr;
}


