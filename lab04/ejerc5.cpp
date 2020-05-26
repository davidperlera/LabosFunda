#include "iostream"
#include "cstring"

using namespace std;

int main()

{
char palabra[100];

cout<<endl;
cout<<"ingrese palabra:";
gets(palabra);

if(palabra[0]==palabra[strlen(palabra)-1])

cout<<"la primera y ultima letra son las mismas"<<endl;
else{

    cout<<"la primera y ultima letra no son las mismas"<<endl;
}


return 0;
}