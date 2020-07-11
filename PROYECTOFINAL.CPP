#include <iostream>

using namespace std;

const int LongCad = 20;
//DECLARAMOS LA ESTRUCTURA QUE UTILIZAREMOS PARA LOS DIFERENTES DATOS
struct costoPorArticulo{
  char nombreArticul[LongCad + 1];
  int cantidad;
  float precio;
  float costoPorArticulo;
};
//LOS PROTOTIPOS DE LAS FUNCIONES A UTILIZAR
void LeerDatos(int a,costoPorArticulo *);
void CostoTPorArt(int a,costoPorArticulo *);
void Mostrar(int a,costoPorArticulo *);
void CostoTotalCompra(int a, costoPorArticulo *);

int main() {
  int CantidaDArt;
  cout<<"Ingrese la cantidad de articulos a comprar: ";
  cin>>CantidaDArt;
// REALIZAMOS EL ARREGLO DE ESTRUCTURAS
  costoPorArticulo *inproduc = new costoPorArticulo[CantidaDArt];
  
  LeerDatos(CantidaDArt,inproduc);
  CostoTPorArt(CantidaDArt,inproduc);
  Mostrar(CantidaDArt,inproduc);
  CostoTotalCompra(CantidaDArt,inproduc);
  return 0;
}
//PRIMERA FUNCION A UTILIZAR CON EL PROPOSITO DE INTRODUCIR LOS DATOS Y DIRECCIONARLOS A EL ARREGLO
void LeerDatos(int a,costoPorArticulo *x){
  int i;
  for(i=0;i<a;i++){                        //utilizamos un for para pedir los datos
    cout<<endl<<"Ingrese el nombre de articulo: ";
    cin>>x[i].nombreArticul;
    cout<<"Ingrese cantidad comprada: ";
    cin>>x[i].cantidad;                    //de esta manera vamos llenando los campos de la estructura y el arreglo
    cout<<"Ingrese el precio unitario: ";
    cin>>x[i].precio;
  }
}
// SEGUNDA FUNCION PARA CALCULAR EL COSTO TOTAL DEL ARTICULO
void CostoTPorArt(int a,costoPorArticulo *x){
  int i;
  for(i=0;i<a;i++){//UTILIZAMOS UN FOR PARA INGRESAR A LOS DATOS DEL ARREGLO
   x[i].costoPorArticulo = x[i].cantidad * x[i].precio;//TRABAJAMOS CON LOS DATOS QUE EL USUARIO INGRESO ANTERIORMENTE
  }
}
//TERCERA FUNCION EN LA CUAL SE MUESTRA EL CONTENIDO DEL ARREGLO CON LS CUATRO DATOS DE LA ESTRUCTURA
void Mostrar(int a,costoPorArticulo *x){
  int i;
  for(i=0;i<a;i++){
    cout<<endl<<"Nombre del articulo: ";
    cout<<x[i].nombreArticul<<endl;
    cout<<"Cantidad de producto comprado: ";
    cout<<x[i].cantidad<<endl;
    cout<<"Precio unitario del articulo: $ ";
    cout<<x[i].precio<<endl;
    cout<<"Costo total de producto: "<<"$"<<x[i].costoPorArticulo<<endl;
  }
  }

//ULTIMA FUNCION CON LA CUAL CALCULAMOS EL TOTAL DE LA COMPRA REALIZADA
void CostoTotalCompra(int a,costoPorArticulo *x){
  int i;
  float TotalDeLaCompra = 0;
  for(i=0;i<a;i++){//ACCEDEMOS CON UN FOR A LOS DATOS Y REALIZAMOS LA RESPECTIVA SUMA PARA EL TOTAL
      TotalDeLaCompra = x[i].costoPorArticulo +  TotalDeLaCompra;
  }
  cout<<endl<<"El total de la compra es: "<<"$"<<TotalDeLaCompra;
}