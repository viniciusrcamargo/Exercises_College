#include<iostream>

using namespace std;


void lerVetor(int vet[]){
    int i;

    for(i = 0; i<10; i++){
        cout<<"Digite o valor "<<(i+1)<<" para o vetor"<<endl;
        cin>>vet[i];
    }
    }
int Pesquisar(int vet[], int num){
    int i, quantNum = 0, a = num;
    for(int i = 0; i<9; i++){
        if(vet[i] == a){
            quantNum++;
        }
    }
    return quantNum;

}

main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[10];
    int x, cont = 0;

    lerVetor(vetor);

    cout<<("Informe x ")<<endl;
    cin>>x;
    cont = Pesquisar(vetor,x);
    cout<<"A quantidade de vezes que o número " << x <<" aparece é "<<cont<<endl;
}

