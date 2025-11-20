#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string binario;
    cout<<"Ingresa un numero binario: ";
    cin>>binario;

    int decimal=0;
    int potencia=0;

    for(int i=binario.length()-1;i>=0;i--){
        if (binario[i]=='1'){
            decimal+=pow(2,potencia);
        }
        potencia++;
    }

    cout<<"Decimal: "<<decimal<<endl;
    return 0;
}