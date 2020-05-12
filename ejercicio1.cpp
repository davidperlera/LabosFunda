#include "iostream"

using namespace std;

int main()
{
    int a, b, c;
    int d=3;
    float sum, div;

    cout<< "ingrese el primer valor: "<< endl;
    cin >> a;

    cout<< "ingrese el segundo valor:"<<endl;
    cin>> b;
    
    cout<<"ingrese el tercer valor"<< endl;
     cin>> c;

    sum= a + b + c;
    div=  sum / d;

    cout<< endl << "el promedio es:" << div << endl;

    return 0;
}
