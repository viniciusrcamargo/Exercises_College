#include<iostream>


using namespace std;


void Par(int vetor[]){
 int quant = 0;
 for(int i = 0; i < 20; i++){
    cout<<"Informe um valor para o vetor na posicao "<<(i+1)<<endl;
    cin>>vetor[i];
    if(vetor[i] % 2 == 0){
        quant++;
    }
 }
 cout<<"Valores do vetor = ";
 for(int i = 0; i < 20; i++){
    cout<<vetor[i]<<" ";
 }
 cout<<""<<endl;
 cout<<"Quantidade de números par = "<<quant;
}

main(){
setlocale(LC_ALL,"Portuguese");

int vetor[20];

Par(vetor);

}
