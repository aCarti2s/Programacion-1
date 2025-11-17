#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingresa un numero entero n: ";
    cin>>n;

    int i=1;
    int suma=0;

    if(n>=1){
        do{
            suma+=i*i;
            i++;
        } while(i<=n);
    }
 
    cout<<"La suma de los cuadrados es: "<<suma<<endl;
    return 0;
}