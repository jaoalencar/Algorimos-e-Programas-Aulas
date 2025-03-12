/*
10 - Faça um programa que tenha um procedimento para exibir a tabuada de um número.
 A saída deve seguir o seguinte formato:
 1 x N =
 2 x N =
 3 x N =
 */
#include <iostream>
using namespace std;

void tabuada(int n){
    for (int i=1; i<=10; i++){
        cout<<i<<" x "<<n<<" = "<<i*n<<endl;
    }
}

int main(){
    int n;
    cout<<"Digite um numero: ";cin>>n;
    tabuada(n);
}
