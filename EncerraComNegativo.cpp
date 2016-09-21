#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int num, cont = 0, acumul = 0;
    double media;

    cout<<"Informe um número ou negatrivo para encerrar"<<endl;
    cin>>num;

    while(num > 0){
        acumul += num;
        cout<<"Informe um número ou negatrivo para encerrar"<<endl;
        cin>>num;
        cont++;
    }
    media = (acumul / cont);
    cout<<"\n A média dos números é = "<<media;
    }
