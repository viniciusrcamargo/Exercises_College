#include<iostream>
#include<stdlib.h>

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int num, opc;
    double saldo, saque = 0, depos = 0;
    cout<<"CADASTRO DE CONTA CORRENTE";
    cout<<"\n Informe o n�mero da conta"<<endl;
    cin>>num;
    cout<<"\n Informe o nome do cliente"<<endl;
    cin>>nome;
    cout<<"\n Informe o saldo"<<endl;
    cin>>saldo;
    system("cls");
    cout<<"Op��es da conta-corrente:"<<endl;
    cout<<"\n 1 - Dep�sito"<<endl;
    cout<<"\n 2 - Saque"<<endl;
    cout<<"\n 3 - Extrato"<<endl;
    cin>>opc;
    system("cls");
    if(opc == 1){
        cout<<"Informe o valor do dep�sito"<<endl;
        cin>>depos;
        saldo += depos;
        system("cls");
        cout<<"\n Valor do dep�sito "<<depos<<endl;
        cout<<"\n Valor total "<<saldo<<endl;
    }else if(opc == 2){
        cout<<"Informe o valor do saque"<<endl;
        cin>>saque;
        system("cls");
        if(saque < saldo){
            saldo -= saque;
            cout<<"\n Valor do saque "<<saque<<endl;
            cout<<"\n Valor total "<<saldo;
        }else{
            cout<<"\n Limite n�o dispon�vel "<<endl;
        }
    }else if(opc == 3){
        cout<<"\n Valor dispon�vel em conta "<<saldo<<endl;
    }







}
