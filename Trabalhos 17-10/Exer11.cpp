#include<iostream>
#include<stdlib.h>

using namespace std;

float Operacao(float X[], float Y[], float Z[], char op){
    for(int i = 0; i < 10; i++){
        cout<<"Informe um valor para a "<<(i+1)<<" posi��o do vetor 1"<<endl;
        cin>>X[i];
    }

    for(int i = 0; i < 10; i++){
        cout<<"Informe um valor para a "<<(i+1)<<" posi��o do vetor 2"<<endl;
        cin>>Y[i];
    }

   if(op == 'A' || op == 'a'){
    for(int i = 0; i < 10; i++){
        Z[i] = X[i] - Y[i];
    }
    return Z[10];
    }
 else
 if(op == 'B' || op == 'b'){
    for(int i = 0; i < 10; i++){
        Z[i] = X[i] + Y[i];
    }
    return Z[10];
    }
    else
    if(op == 'C' || op == 'c'){
        for(int i = 0; i < 10; i++){
        Z[i] = X[i] * Y[i];
    }
    return Z[10];
    }
    else
        if(op == 'D' || op == 'd'){
        for(int i = 0; i < 10; i++){
        Z[i] = X[i] / Y[i];
    }
    return Z[10];
    }
 }





int main(){
setlocale(LC_ALL,"Portuguese");

float vetorX[10], vetorY[10], vetorZ[10];
char opa;

cout<<"Calculadora "<<endl;
cout<<"Escolha uma opera��o "<<endl;
cout<<"A - Diferen�a "<<endl;
cout<<"B - Soma "<<endl;
cout<<"C - Produto "<<endl;
cout<<"D - Divis�o "<<endl;
cout<<"E - Encerrar o programa "<<endl;
cin>>opa;
for(int i = 0; i < 10; i++){
cout<<"O resultado � = "<<Operacao(vetorX, vetorY, vetorZ, opa)<<endl;}
}

