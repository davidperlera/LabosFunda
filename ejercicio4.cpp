#include "iostream"

using namespace std;

int main()

{ 
 
 string p;
 int pre, C, t;

   cout<< "Nombre del producto comprado:";
   getline(cin,p);

    cout<< "Precio: $";
    cin >> pre;

    cout <<"Cantidad:"<<endl;
    cin >> C;
t= C * pre;

cout<<"Total gastado: $"<< t <<endl;

return 0;





}
