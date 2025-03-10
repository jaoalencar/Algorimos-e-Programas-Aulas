/*4 - Desenvolva um programa que contenha uma função para calcular o volume de uma esfera. O raio da esfera deve ser passado como parâmetro, e a função deve retornar o volume correspondente.*/

#include <iostream>
#include <cmath>

using namespace std;
//Definição de variaveis globais
float pi = M_PI;

//FUNÇÕES
float volEsfera(float raio){
    return (4.0/3.0) * pi * pow(raio, 3);
}

int main(){
    float r;
    cout<<"Digite o raio da esfera: ";cin>>r;
    cout<<"O volume da esfera é: "<<volEsfera(r);
}