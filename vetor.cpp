#include<iostream>
using namespace std;
//Variavel Homogenea - Vetor
//Exemplo

main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[10], i;

    cout<<"Digite valores para o vetor "<<endl;
    for(i = 0; i<10; i++){
        cin>>vetor[i];}
    cout<<"Vetor "<<endl;
    for(i = 0; i<=9; i++){
        cout<<" i "<<i<<" = "<<vetor[i]<<endl;
    }
}
