#include<iostream>

using namespace std;

main()
{
setlocale(LC_ALL,"Portuguese");

 int num;

 cout<<"Informe um número"<<endl;
 cin>>num;

 if(num % 2 == 0){
    cout<<"\n Número par!"<<endl;
 }else{
    cout<<"\n Número impar"<<endl;
 }

 if(num > 0){
    cout<<"\n Número positivo"<<endl;
 }else{
    cout<<"\n Número negativo"<<endl;
 }

}
