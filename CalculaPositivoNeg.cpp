#include<iostream>
#include<stdlib.h>

using namespace std;

main(){

    setlocale(LC_ALL,"Portuguese");

    int num, impar = 0, par = 0, cont = 0;
    double mediaPar = 0, mediaGeral = 0, parAcum=0, total = 0;
    cout<<"Informe um n�mero ou 0 para sair"<<endl;
    cin>>num;
    while(num > 0){
    if(num % 2 == 0){
        par++;
        parAcum += num;
    }else{
        impar++;
    }
    cont++;
    cout<<"Informe um n�mero ou 0 para sair"<<endl;
    cin>>num;
    total += num;
    //system("cls");
    }
    mediaPar = (parAcum / cont);
    mediaGeral = (total / cont);
    cout<<"\nA Quantidade de n�meros impares "<<impar<<endl;
    cout<<"\nA Quantidade de n�meros pares "<<par<<endl;
    cout<<"\nA M�dia dos n�meros pares "<<mediaPar<<endl;
    cout<<"\nA M�dia geral dos n�meros digitados "<<mediaGeral<<endl;

}
