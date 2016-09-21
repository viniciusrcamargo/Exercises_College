#include<iostream>

using namespace std;

main()
{
    int n1, n2, op;

    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe n1:"<<endl;
    cin>>n1;
    cout<<"\n Informe n2:"<<endl;
    cin>>n2;

    cout<<"\n Escolha uma das opções abaixo"<<endl;
    cout<<"\n 1 - Média entre os números"<<endl;
    cout<<"\n 2 - Diferença do maior pelo menor"<<endl;
    cout<<"\n 3 - Produto entre os números digitados"<<endl;
    cout<<"\n 4 - Divisão do primeiro pelo segundo"<<endl;
    cin>>op;
    switch(op)
    {
    case 1:/*if(op==1)*/
        cout<<"\n Média entre os dois nr. = "<<(n1 + n2) / 2;
        break;
    case 2:
        if(n1>n2)
        {
            cout<<"\n A diferença = "<<n1-n2;
        }
        else
        {
            cout<<"\n A diferença = "<<n2-n1;
        };
        break;
    case 3:
        cout<<"\n O produto = "<<n1*n2;
        break;
    case 4:
        cout<<"\n A divisão = "<<n1/n2;
        break;
    default:
        cout<<"\n Não é um número válido!"<<endl;
        break;
    }
}
