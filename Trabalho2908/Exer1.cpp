#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int produto, opcPag;
    float valor = 0;

    cout<<"Informe o produto da venda: "<<endl;
    cout<<"1 - Feij�o"<<endl;
    cout<<"2 - Leite"<<endl;
    cout<<"3 - P�o"<<endl;
    cin>>produto;
    switch(produto){
    case 1: valor = 10.0;
    break;
    case 2: valor = 5.0;
    break;
    case 3: valor = 1.0;
    default: cout<<"\n Op��o indispon�vel "<<endl;}

    cout<<"Informe a forma de pagamento: "<<endl;
    cout<<"1 - A vista (dinheiro ou cheque)"<<endl;
    cout<<"2 - A vista (cart�o de cr�dito)"<<endl;
    cout<<"3 - Em duas vezes"<<endl;
    cout<<"4 - Em tr�s vezes"<<endl;
    cin>>opcPag;

    if(opcPag == 1){
       valor -= (valor*0.1);
       cout<<"Valor a ser pago com desconto de 10% = R$ "<<valor<<endl;
    }else if(opcPag == 2){
        valor -= (valor*0.05);
        cout<<"Valor a ser pago com desconto de 5% = R$ "<<valor<<endl;
    }else if(opcPag == 3){
        valor = valor /2;
        cout<<"Valor a ser pago em duas parcelas sem juros. Duas vezes de = R$ "<<valor<<endl;
    }else if(opcPag == 4){
        valor = ((valor / 2) + (valor * 0.1));
        cout<<"Valor a ser pago em tr�s parcelas com juros de 10%. Tr�s vezes de = R$ "<<valor<<endl;
    }else{
        cout<<"Op��o inv�lida!";
    }

    }




