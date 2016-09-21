#include<iostream>
#include<stdlib.h>

using namespace std;

main(){

    setlocale(LC_ALL,"Portuguese");

    int num, impar = 0, par = 0, cont = 0;
    double mediaPar = 0, mediaGeral = 0, parAcum=0, total = 0;
    cout<<"Informe um número ou 0 para sair"<<endl;
    cin>>num;
    while(num > 0){
    if(num % 2 == 0){
        par++;
        parAcum += num;
    }else{
        impar++;
    }
    cont++;
    cout<<"Informe um número ou 0 para sair"<<endl;
    cin>>num;
    total += num;
    //system("cls");
    }
    mediaPar = (parAcum / cont);
    mediaGeral = (total / cont);
    cout<<"\nA Quantidade de números impares "<<impar<<endl;
    cout<<"\nA Quantidade de números pares "<<par<<endl;
    cout<<"\nA Média dos números pares "<<mediaPar<<endl;
    cout<<"\nA Média geral dos números digitados "<<mediaGeral<<endl;

}
