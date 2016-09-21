#include<iostream>

using namespace std;

void calc(int &num1, int &num2, char opc){

    int a, b;
    a = num1;
    b = num2;
    if(opc == '+'){
        num1 = a+b;
        num2 = (a+b)/2;
    }
}

main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    cout<<"Informe número 1 = ";
    cin>>n1;
    cout<<"Informe número 2 = ";
    cin>>n2;
    calc(n1,n2,'+');
    cout<<"A soma = "<<n1<<endl;
    cout<<"A média = "<<n2;
}
