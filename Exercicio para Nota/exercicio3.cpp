#include<iostream>
#include<stdlib.h>

using namespace std;

int soma(int n1, int n2){
    int acumul = 0;
  for(int i = n1; i < n2; i++){
    acumul =+ n1;
    n1++;
  }
  return acumul;
}

main(){

setlocale(LC_ALL,"Portuguese");

int num1, num2;

cout<<"Digite numero 1"<<endl;
cin>>num1;
cout<<"Digite numero 2"<<endl;
cin>>num2;
cout<<"A soma dos números é "<<soma(num1, num2);
}
