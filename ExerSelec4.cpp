#include<iostream>
#include<math.h>
using namespace std;

main(){
setlocale(LC_ALL,"Portuguese");


int num1, num2, num3;

cout<<"Informe n�mero 1 "<<endl;
cin>>num1;
cout<<"\n Informe n�mero 2"<<endl;
cin>>num2;
cout<<"\n Informe n�mero 3"<<endl;
cin>>num3;

if(num1 > 0){
   cout<<"\n Raiz quadradra de n�mero 1 "<<sqrt(num1)<<endl;
}else{
    cout<<"\n O Quadrado de n�mero 1 "<<num1 * num1<<endl;
}
if((num2 >= 10) && (num2 <= 100)){
    cout<<"O n�mero 2 est� entre 10 e 100 - intervalo permitido"<<endl;
}
if(num3 < num2){
    cout<<"\n A diferen�a entre o n�mero 3 e n�mero 2 = "<<num3-num2<<endl;
}else{
    cout<<"\n O n�mero 3 adicionado de 1 "<<num3++;
}
}
