#include "iostream"

using namespace std;

int arreglo[200];
int main(){

int i;
int n=200;

for(i=200;i>0;i--){
    arreglo[i]=n--;
    if(arreglo[i]%2 != 0){
        cout<<arreglo[i]<<endl;
    }
}
return 0;
}
