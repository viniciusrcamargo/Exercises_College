#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int num, cont = 0, nega = 0;

    do{
        cout<<"Informe um n�mero "<<endl;
        cin>>num;
        if(num < 0){
            nega++;
        }
        cont++;
    }while(cont < 5);
    cout<<"\n Quantidade de n�meros negativos = "<<nega;
    }
