#include "iostream"

#include "cmath"

using namespace std;

#define PI 3.1416

int main()
{
    int s=2;
    float radio, área, perímetro;

    cout<< endl <<"ingrsar valor del radio:"<< endl;
    cin>> radio;

    área= PI * pow(radio,s);
    perímetro= s * PI * radio;

    cout<<"área:"<< área << endl;

    cout<<"perímetro:"<< perímetro<<endl;

    return 0;

}
