
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//VARIAVEIS GLOBAIS
FILE *pont_arq;//Cria variavel ponteiro para o arquivo

using namespace std;
int main(){
    char nomeArq[50], msg[50];

    //Apenas solicitar o nome do arquivo
    cout<<"Digite o nome do arquivo (sem espacos): ";cin>>nomeArq;
    //Utilizar apenas arquivos .txt
    strcat(nomeArq, ".txt");
    //Abrir o arquivo
    pont_arq = fopen(nomeArq, "w");

    //MENSAGEM DE ERRO PARA ARQUIVO ERRADO
    if (pont_arq == NULL)
    {
        cout<<"Erro ao abrir o arquivo";
        return EXIT_FAILURE;
    }

    //Armazenar 3 mensagens no arquivo
    fflush(stdin);//LIMPA O BUFFER
    for (int i = 1; i <= 3; i++)
    {
        cout<<"Mensagem "<<i<<": ";
        fgets(msg,50,stdin);
        //cin>>msg;//ESSA LINHA FOI EM TESTE, CASO USE "CIN" ELE PULA OS ESPAÇO E PREENCHE ATÉ 3 ESPAÇOS
        fprintf(pont_arq, "Mensgem %d: %s\n", i, msg);
    }
    //Fechar o arquivo
    fclose(pont_arq);

    //REALIZA A LEITURA DO ARQUIVO
    pont_arq = fopen(nomeArq, "r");
    cout<<"Leitura do arquivo: \n";
    char c;
    do{
        c = getc(pont_arq);
        cout<<c;
    }while (c!=EOF);  
    fclose(pont_arq);

getchar();
return 0;
}