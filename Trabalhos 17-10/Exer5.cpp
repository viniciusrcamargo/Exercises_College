#include<iostream>


using namespace std;


void Par(int vetor[], int qtdPar){
 int quant = qtdPar;
 for(int i = 0; i < 20; i++){
    cout<<"Informe um valor para o vetor "<<endl;
    cin>>vetor[i];
    if(vetor[i] % 2 == 0){
        quant++;
    }
 }
 cout<<"Valores do vetor = ";
 for(int i = 0; i < 20; i++){
    cout<<vetor[i]<<" ";
 }
 cout<<"";
 cout<<"Quantidade de números par = "<<qtdPar;
}

main(){
setlocale(LC_ALL,"Portuguese");

int vetor[20], quantidade;

Par(vetor, quantidade);

}
