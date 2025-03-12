/*6 - Resolva o exercício anterior utilizando as sub-rotinas criadas nos exercícios 1 e 2 para validar as notas
 e a entrada da letra.

 OBS(questão 5):
 5 - Escreva um programa com um procedimento que receba três notas e uma letra como parâmetros.
 Se a letra for “A”, calcule e retorne a média aritmética.
 Se for “P”, retorne a média ponderada considerando os pesos 2, 3 e 4 para as respectivas notas.
 */

#include <iostream>
using namespace std;
//VARIAVEIS GLOBAIS


//FUNÇÕES
//Méida ponderada
float mPoderada(float n1, float n2, float n3){
    return (n1*2 + n2*3 + n3*4)/(2+3+4);
}
//Média Aritimética
float mAritimetica(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}
float ColetaNota(int n, float nx){
    bool numOK=true;
    while(numOK){
        cout<<"Digite a "<<n<<" nota: ";cin>>nx;
        if (nx>=0&&nx<=10){
            numOK = false;
        }else{
            cout<<"Digite um numero entre 0 e 10"<<endl;
        }
    }
    return nx;
}
char ColetaMedia(char c){
    bool letraOK=true;
    while(letraOK){
        cout<<"Digite 'A' para media aritimetica"<<endl;
        cout<<"Digite 'P' para meida ponderada"<<endl;
        cout<<"Letra desejada: ";cin>>c;
        if (c=='P'||c=='A'){
            letraOK=false;
        }
        else{
            cout<<"Digite uma letra valida"<<endl;
        }
    }
    return c;
}



//Função principal
int main(){
    float n1, n2, n3;
    char Letra;
    //Coleta as notas
    n1 = ColetaNota(1, n1);
    n2 = ColetaNota(2, n2);
    n3 = ColetaNota(3, n3);

    //coleta a média escolhida
    Letra = ColetaMedia(Letra);
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
