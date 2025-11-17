#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingresa un numero entero mayor a 0: ";
    cin>>n;

    do{
        cout<<n<<endl;
        n--;
    } while(n>=0);
    return 0;
}