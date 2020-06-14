#include "iostream"

using namespace std;

int añobisiesto(int);// declaramos la funcion


int main()

{
int año;

cout<<"ingrese el año: ";//le pedimos que ingrese el año
cin>>año;
cout<<endl;

añobisiesto(año);


return 0;

}

int añobisiesto(int x)//funcion para determinar si el año es bisiesto o no
{
    int año;


if(x%400==0){//un if para la primera condicion de si es bisiesto


cout<<"el año es bisiesto";}

else if(x%4==0 && x%100!=0 ){//un  else if para la segunda condicion de si es bisiesto

cout <<"el año es bisiesto";
}

else {//un else para el caso contrario a las otras dos condiciones

    cout<<"el año no es bisiesto";

}

 return año;

}