#include<iostream>
using namespace std;
//Variavel Homogenea - Vetor
//Exemplo

main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[10], i;
    double maior = -1, menor = 999;

    cout<<"Digite valores para o vetor "<<endl;
    for(i = 0; i<10; i++){
        cin>>vetor[i];
        if(vetor[i] > maior)
            maior = vetor[i];
        if(vetor[i] < menor)
            menor = vetor[i];
        }
    cout<<"Vetor "<<endl;
    for(i = 0; i<=9; i++){
        cout<<" i "<<i<<" = "<<vetor[i]<<endl;
    }
    cout<<"O menor número digitado "<<menor<<endl;
    cout<<"O maior número digitado "<<maior;

}
