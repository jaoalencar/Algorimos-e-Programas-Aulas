/*Faça um programa que tenha uma sub rotina que receba dois números inteiros
Essa sub rotina deve calcular a soma dos dois númeoros,
além da subtração e da divisão do maior pelo menor.
Certificar que os números não são iguais*/

#include <iostream>
using namespace std;

//FUNÇÕES
bool isIgual(int a, int b){
    return (a==b);
}
int soma(int a, int b){
    return a+b;
}

//Subtração do maior pelo menor
int sub(int a, int b){
    if (b>a)//Garante a subtração do maior numero pelo menor numero
    {
        int temp = a;
        a = b;
        b = temp;
    }
    return a-b;
    
}

int divisao(int a, int b){
    if (b>a)//Garante a subtração do maior numero pelo menor numero
    {
        int temp = a;
        a = b;
        b = temp;
    }
    return a/b;
}

//PRINCIPAL
int main(){
    int n1,n2;
    bool iguais=true;
    //Verifica igualdade
    while (iguais)
    {
        cout<<"Primeiro numero inteiro: ";cin >> n1;
        cout<<"Segundo numero inteiro: ";cin >> n2;

        iguais = isIgual(n1, n2);//compara valores citados
        if (iguais==1){cout<<"Digite numeros diferentes"<<endl;}//caso seja iguais retorna mensagem de erro
    }
    //Mostra resultado das operações
    cout<<"Soma dos valores: "<<soma(n1, n2)<<endl;
    cout<<"Subtracao dos valores: "<<sub(n1, n2)<<endl;
    cout<<"Divisao dos valores: "<<divisao(n1, n2)<<endl;

return 0;
}