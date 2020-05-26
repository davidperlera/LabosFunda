#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

int main ()
{

    char palabra[50];
    
    cout<<"digite la palabra: ";
    gets(palabra);

    if(strlen(palabra)>10)
    
    cout<<"la palabra tiene mas de 10 caracteres"<<endl;

        else
       {
    
            
        cout<<"la palabra no tiene 10 caracteres"<<endl;


       }
        
    if (strlen(palabra)%2==0)

    cout<<"la longitud es par"<<endl;

    else{

        cout<<"la longitud es impar"<<endl;
    }
    
    



    return 0; 
}