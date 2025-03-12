/*8 - Crie um programa que tenha uma função para calcular a idade de uma pessoa em dias.
 O usuário deve informar a idade em anos, meses e dias, e a função deve retornar o total correspondente em dias.*/
 #include <iostream>
 using namespace std;
//FUNÇÕES
//Transforma meses em dias
 int MestrcDias(int mes){
     return mes*30;
 }
 //Transforma anos em dias
 int AnotrcDias(int ano){
     return ano*365;
 }

 //Função principal
 int main(){
    //variaveis
    int ano, mes, dias, idadeDias;

    //Coleta os anos meses e dias de vida da pessoa
    cout<<"Digite quantos anos, meses e dias voce tem de vida"<<endl;
    cout<<"Ano: ";cin>>ano;
    cout<<"Meses: ";cin>>mes;
    cout<<"Dias: ";cin>>dias;

    //soma os dias de vida de uma pessoa usando as funções que transformam anos em dias e meses em dias
    idadeDias = AnotrcDias(ano) + MestrcDias(mes) + dias;

    //mostra a idade em dias da pessoa
    cout<<"Voce tem "<<idadeDias<<" dias de vida";

return 0;
 }
