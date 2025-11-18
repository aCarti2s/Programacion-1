#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingresa un numero: ";
    cin>>n;

    cout<<"Los numeros primos entre el " <<n<< " y el 2 son: "<<endl;
    
    for(int num=2; num<=n; num++){
        bool esPrimo=true;

        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                esPrimo=false;
                break;
            }
        }
        if (esPrimo){
            cout<<num<<""<<endl;   
        }
    }  
return 0;
}