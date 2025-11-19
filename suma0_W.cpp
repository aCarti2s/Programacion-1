#include <iostream>
using namespace std;

int main(){
    float numero=0.0, suma=0.0;

    cout<<"Ingresa un numero(0.0 para finalizar): ";
    cin>>numero;

    while(numero!=0.0){
        suma+=numero;

        cout<<"Ingresa otro numero: ";
        cin>>numero;
    }
    cout<<"La suma total es: "<<suma;
    return 0;

}