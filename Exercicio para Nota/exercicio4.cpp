#include<iostream>
#include<stdlib.h>


using namespace std;

float result(float n1, float n2, int op){
 if(op == 1)
    return(n1+n2);
 else
 if(op == 2){
    if(n1 > n2){
        return(n1 - n2);
    }else{
        return (n2 - n1);}}
    else
        if(op == 3){
        return(n1*n2);}
    else
    if(op == 4){
        if((n1 == 0) or (n2 == 0)){
            cout<<"Opera��o inv�lida!";
        }else
        return(n1 / n2);
    }
 }



main(){
setlocale(LC_ALL,"Portuguese");
int opa;
float num1, num2;
cout<<"Calculadora "<<endl;
cout<<"Escolha uma opera��o "<<endl;
cout<<"1 - Soma "<<endl;
cout<<"2 - Subtra��o "<<endl;
cout<<"3 - Multiplica��o "<<endl;
cout<<"4 - Divis�o "<<endl;
cout<<"5 - Encerrar o programa "<<endl;
cin>>opa;

while(opa > 0 and opa < 5){
cout<<"Informe n�mero 1 "<<endl;
cin>>num1;
cout<<"Informe n�mero 2 "<<endl;
cin>>num2;
cout<<"O resultado � = "<<result(num1, num2, opa)<<endl;
cout<<"Calculadora "<<endl;
cout<<"Escolha uma opera��o "<<endl;
cout<<"1 - Soma "<<endl;
cout<<"2 - Subtra��o "<<endl;
cout<<"3 - Multiplica��o "<<endl;
cout<<"4 - Divis�o "<<endl;
cout<<"5 - Encerrar o programa "<<endl;
cin>>opa;
system("cls");
}
}
