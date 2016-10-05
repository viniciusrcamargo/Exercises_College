#include<iostream>
using namespace std;
//Variavel Homogenea - Vetor
//Exemplo
void retorno(int &menor, int &maior, int vetor[]){
    int i = 0;
    menor = 999;
    maior = -1;
    cout<<"Digite valores para o vetor"<<endl;
    for(int i = 0; i<10; i++){
       cin>>vetor[i];
       if(vetor[i] < menor)
            menor = vetor[i];
       if(vetor[i] > maior)
            maior = vetor[i];
       }
    }

main(){
    setlocale(LC_ALL,"Portuguese");

    int men, mai,vet[10];
    retorno(men, mai, vet);

    cout<<"O menor número digitado "<<men<<endl;
    cout<<"O maior número digitado "<<mai;

}
