#include<iostream>

using namespace std;

void Vetor(int vetor[]){
    int num;
    for(int i = 0; i < 20; i++){
        cout<<"Informe o "<<(i+1)<<" valor do vetor"<<endl;
        cin>>num;
        vetor[i] = num;
    }
    cout<<endl;
    cout<<"Números do vetor = ";
    for(int i = 0; i < 20; i++){
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
    cout<<"Resultado trocando a primeira posição do vetor pela última = ";
    for(int i = 19; i >= 0; i--){
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
}

main(){
    setlocale(LC_ALL,"Portuguese");

    int vet[20];

    Vetor(vet);

}
