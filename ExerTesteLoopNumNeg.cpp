#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int num, cont, negativo = 0;

    for(cont = 0; cont < 5; cont++){
    cout<<"Informe um n�mero "<<endl;
    cin>>num;
    if(num < 0){
        negativo++;
    }
    }
    cout<<"Quantidade de n�meros negativos = "<<negativo;
}
