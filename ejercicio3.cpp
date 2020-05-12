#include "iostream"

#include "cmath"

using namespace std;

int main()

{
    float d=-1, e=4, f=2, g, h, i, j, k, l, m, n, p, q;  
    float a, b, c;

    cout<< endl << "ingrese el valor de a:";
    cin >> a;

    cout<< "ingrese el valor de b:";
    cin >> b;

    cout<< "ingrese el valor de c:" << endl;
    cin >> c;

g= d * b;
h= pow(b, f);
i= e * a * c;
j= f * a;
k= h - i;
l= sqrt(k);
m= g + l;
n= g - l;
p= m / j;
q= n / j;

cout<< "x=" << p << "," << q<< endl;

return 0;


}
