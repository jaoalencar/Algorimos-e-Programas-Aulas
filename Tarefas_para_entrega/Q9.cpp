/*9 - Escreva um programa que tenha uma função para calcular o fatorial de um número inteiro informado pelo usuário.*/

#include <iostream>
using namespace std;
//FUNÇÕES
int fatorial(int n){
    int retorno=1;
    for (int i=1; i<=n; i++){
        retorno = retorno*i;
    }
    return retorno;
}
//Função principal
int main(){
    int n;
    cout<<"Digite um numero: ";cin>>n;
    cout<<fatorial(n);
    
return 0;
}
