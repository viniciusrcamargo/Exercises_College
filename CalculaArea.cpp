#include<iostream>
#include<stdlib.h>

using namespace std;

main(){
    double base, altura, area = 0;

    cout<<"\n Informe a base do triangulo "<<endl;
    cin>>base;
    cout<<"\n Informe a altura do triangulo "<<endl;
    cin>>altura;
    area = (base*altura)/2;
    system("cls");
    cout<<"\nA area do triangulo é = "<<area<<endl;
}
