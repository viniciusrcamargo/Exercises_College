#include<iostream>

using namespace std;

int Exercicio1(int vet1[], int vet2[], int n){
    int a;
    n = a;
    int qtdVet1 = 0, qtdVet2 = 0;
    for(int i = 0; i< a; i++){
        cout<<"Informe um valor para o vetor "<<endl;
        cin>>a;
        if(a % 2 == 0){
            vet1[i] = a;
            qtdVet1++;
        }else{
            vet2[i] = a;
            qtdVet2++;

    }
    for(int i = 0; i < a; i++){
        cout<<"Vetor 1 valor "<<(i+1)<<vet1[i]<<endl;
        cout<<"Quantidade de valores do vetor 1 "<<qtdVet1<<endl;
        cout<<"Vetor 1 valor "<<(i+1)<<vet1[i]<<endl;
        cout<<"Quantidade de valores do vetor 1 "<<qtdVet1<<endl;
    }
    }
}
main(){

    int num;
    cout<<"Informe um valor para o vetor "<<endl;
    cin>>num;
    int vetor1[num], vetor2[num];
    for(int i = 0; i < num; i++){
        cout<<"Vetor 1 "<<vetor1[i];
        cout<<"Vetor 2 "<<vetor2[i];
    }
    Exercicio1(vetor1, vetor2, num);
}
