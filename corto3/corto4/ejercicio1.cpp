#include "iostream"
#include "string.h"

using namespace std;

char codcadenas(char x[]);

int main(){
char cadena[1000];

cout<<"ingrese las palabras a codificar:";
cin.get(cadena,1000);

codcadenas(cadena);
cout<<cadena;

return 0;

}

char codcadenas(char x[1000]){

    int l=strlen(x);
    for (int i=0;i<l;i++){

    switch(x[i]){
        case 'm':
        x[i]='0';
        break;
        case 'u':
        x[i]='1';
        break;
        case 'r':
        x[i]='2';
        break;
        case 'c':
        x[i]='3';
        break;
        case 'i':
        x[i]='4';
        break;
        case 'e':
        x[i]='5';
