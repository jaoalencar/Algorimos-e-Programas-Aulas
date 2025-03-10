/*5 - Escreva um programa com um procedimento que receba três notas e uma letra como parâmetros.
 Se a letra for “A”, calcule e retorne a média aritmética.
 Se for “P”, retorne a média ponderada considerando os pesos 2, 3 e 4 para as respectivas notas.*/
#include <iostream>
using namespace std;

//FUNÇÕES
//Méida ponderada
float mPoderada(float n1, float n2, float n3){
    return (n1*2 + n2*3 + n3*4)/(2+3+4);
}
//Média Aritimética
float mAritimetica(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

//Função principal
int main(){
    float n1, n2, n3;
    char Letra;
    //Coleta as notas
    cout<<"Digite a primeira nota: ";cin>>n1;
    cout<<"Digite a segunda nota: ";cin>>n2;
    cout<<"Digite a terceira nota: ";cin>>n3;
    //coleta a média escolhida
    cout<<"Digite 'A' para media aritimetica"<<endl;
    cout<<"Digite 'P' para meida ponderada"<<endl;
    cout<<"Letra desejada: ";cin>>Letra;
    //--------------------------------------------------------------------
    //Verifica a letra digitada e retorna a media escolhida
    switch (Letra){
    case 'P':
        cout<<"Media ponderada: "<<mPoderada(n1, n2, n3);//Média ponderada
        break;
    case 'A':
        cout<<"Media aritimetica: "<<mAritimetica(n1, n2, n3); //Média aritimética
        break;
    default:
        cout<<"Voce nao digitou uma letra valida!";
        break;
    }

return 0;
}
