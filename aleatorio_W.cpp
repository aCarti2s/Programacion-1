#include <iostream>
using namespace std;

int main(){
    int adivinar_numero=17, numero_usuario;
    cout<<"Ingresa un numero entre 1 y 100: ";
    cin>>numero_usuario;

    while (numero_usuario!=adivinar_numero){
     if(numero_usuario<adivinar_numero){
        cout<<"El numero a adivinar es mayor"<<endl;
     }
     else if (numero_usuario>adivinar_numero){
        cout<<"El numero a adivinar es menor"<<endl;
     }   

    cout<<"Ingresa otro numero: ";
    cin>>numero_usuario; 
    }
    
    if (numero_usuario==adivinar_numero)
    cout<<"Felicidades, encontraste el numero";
    
    return 0;
}

