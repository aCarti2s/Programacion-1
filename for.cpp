#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingresa un numero entero: ";
    cin>>n;

    int suma=0;

    for(int i=1;i<=n;i++){
        suma+=i*i;
    }

    cout<<"La suma de los cuadrados es: "<<suma<<endl;
    return 0;
}