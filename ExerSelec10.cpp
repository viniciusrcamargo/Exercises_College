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

    cout<<"\n Escolha uma das op��es abaixo"<<endl;
    cout<<"\n 1 - M�dia entre os n�meros"<<endl;
    cout<<"\n 2 - Diferen�a do maior pelo menor"<<endl;
    cout<<"\n 3 - Produto entre os n�meros digitados"<<endl;
    cout<<"\n 4 - Divis�o do primeiro pelo segundo"<<endl;
    cin>>op;
    switch(op)
    {
    case 1:/*if(op==1)*/
        cout<<"\n M�dia entre os dois nr. = "<<(n1 + n2) / 2;
        break;
    case 2:
        if(n1>n2)
        {
            cout<<"\n A diferen�a = "<<n1-n2;
        }
        else
        {
            cout<<"\n A diferen�a = "<<n2-n1;
        };
        break;
    case 3:
        cout<<"\n O produto = "<<n1*n2;
        break;
    case 4:
        cout<<"\n A divis�o = "<<n1/n2;
        break;
    default:
        cout<<"\n N�o � um n�mero v�lido!"<<endl;
        break;
    }
}
