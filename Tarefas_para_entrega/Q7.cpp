/*7 - Implemente um programa que tenha uma função para verificar se um número é primo.
 A função deve retornar verdadeiro se o número for primo e falso caso contrário.*/
 #include <iostream>
 using namespace std;

 //FUNÇÕES
 //Verifica se é primo
bool isPrimo(int n){
    bool primo=true;//variavel que retorna se é primo ou não
    for (int i=2; i<=n/2; i++){
        if(n%i==0){
            primo=false;
        }
    }
    return primo;
}

//------------------
 //Função principal
 int main(){
    int n;//Var numero digitado
    cout<<"Digite um numero: ";cin>>n;

    //Retorna se o numero é primo ou não
    switch(isPrimo(n)){
    case true:
        cout<<"Numero PRIMO";
        break;
    case false:
        cout<<"Numero NAO primo";
        break;
    default:
        break;
    }


return 0;
 }
