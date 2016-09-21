#include<iostream>
#include<math.h>
using namespace std;

main(){
setlocale(LC_ALL,"Portuguese");


int num1, num2, num3;

cout<<"Informe número 1 "<<endl;
cin>>num1;
cout<<"\n Informe número 2"<<endl;
cin>>num2;
cout<<"\n Informe número 3"<<endl;
cin>>num3;

if(num1 > 0){
   cout<<"\n Raiz quadradra de número 1 "<<sqrt(num1)<<endl;
}else{
    cout<<"\n O Quadrado de número 1 "<<num1 * num1<<endl;
}
if((num2 >= 10) && (num2 <= 100)){
    cout<<"O número 2 está entre 10 e 100 - intervalo permitido"<<endl;
}
if(num3 < num2){
    cout<<"\n A diferença entre o número 3 e número 2 = "<<num3-num2<<endl;
}else{
    cout<<"\n O número 3 adicionado de 1 "<<num3++;
}
}
