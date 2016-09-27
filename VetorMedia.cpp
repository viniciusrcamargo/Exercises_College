#include<iostream>
using namespace std;
//Variavel Homogenea - Vetor
//Exemplo
main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[10], i;
    double media = 0, total = 0;

    cout<<"Digite valores para o vetor "<<endl;
    for(i = 0; i<10; i++){
        cin>>vetor[i];
        total +=vetor[i];

        }
    cout<<"Vetor ";
    for(i = 0; i<=9; i++){
        cout<<" i "<<i<<" = "<<vetor[i]<<endl;
    }
    media = (total / i);
    cout<<"A média é "<<media<<endl;
}
