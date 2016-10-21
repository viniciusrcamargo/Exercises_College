#include<iostream>

using namespace std;


void Multiplicacao(int vet1[], int vet2[], int vet3[]){
    for(int i = 0; i < 10; i++){
        cout<<"Informe um valor o " << (i+1)<<" do primeiro vetor"<<endl;
        cin>>vet1[i];

    }
    for(int i = 0; i < 10; i++){
        cout<<"\nInforme um valor o " << (i+1)<<" do segundo vetor"<<endl;
        cin>>vet2[i];
        vet3[i] = vet1[i] * vet2[i];
    }

    cout<<"Resultado da multiplicação dos valores dos dois vetores ";
    for(int i = 0; i< 10; i++){
        cout<<"\nValor = "<<(i+1)<<" do vetor 1 = "<<vet1[i]<<" * Valor = "<<(i+1)<<" do vetor 2 = "<<vet2[i]<<" resultado = "<<vet3[i]<<endl;
    }


}

main(){
setlocale(LC_ALL,"Portuguese");
    int vetorA[10], vetorB[10], vetorC[10];

    Multiplicacao(vetorA,vetorB,vetorC);

}
