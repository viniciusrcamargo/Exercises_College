#include<iostream>

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");

    int anoNasc, result;

    cout<<"Informe o ano de seu Nascimento"<<endl;
    cin>>anoNasc;
    result = (2016 - anoNasc);
    cout<<"Sua idade "<<result<<endl;
    if((result >= 16) && (result >= 18)){
        cout<<"\n Pode votar "<<endl;
        cout<<"\n Pode tirar carta de motorista "<<endl;
    }


}
