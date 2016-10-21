#include<iostream>
#include<stdio.h>

using namespace std;

void Exercicio1(int num, int vetor1[], int vetor2[]){

    int qtdVet1 = 0, qtdVet2 = 0, entrada;

        for(int i = 0; i < num; i++){
        cout<<"Informe o "<<(i+1)<<" valor para o vetor"<<endl;
        cin>>entrada;
        fflush(stdin);
        if(entrada % 2 == 0){
            vetor1[i] = entrada;
            qtdVet1++;
        }
        //if(A % 2 != 0){
        else{
        vetor2[i] = entrada;
        qtdVet2++;
        }
}
    fflush(stdin);
    cout<<"Vetor 1 = ";
    for(int i = 0; i < qtdVet1; i++){
        cout<<vetor1[i]<<" ";
    }

    cout<<(" ")<<endl;
    cout<<"Quantidade de elementos do vetor 1 = "<<qtdVet1<<endl;
    cout<<(" ")<<endl;

    cout<<"Vetor 2 = ";
    for(int i = 0; i < qtdVet2; i++){
        cout<<vetor2[i]<<" ";
    }
    cout<<(" ")<<endl;
    cout<<"Quantidade de elementos do vetor 2 = "<<qtdVet2<<endl;
}

main(){
    int n;
    cout<<"Informe o tamanho do vetor "<<endl;
    cin>>n;
    int vetorA[n], vetorB[n];
    cout<<""<<endl;
    Exercicio1(n, vetorA, vetorB);

}
