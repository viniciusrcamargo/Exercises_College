#include<iostream>

using namespace std;

main()
{
setlocale(LC_ALL,"Portuguese");

 int num;

 cout<<"Informe um n�mero"<<endl;
 cin>>num;

 if(num % 2 == 0){
    cout<<"\n N�mero par!"<<endl;
 }else{
    cout<<"\n N�mero impar"<<endl;
 }

 if(num > 0){
    cout<<"\n N�mero positivo"<<endl;
 }else{
    cout<<"\n N�mero negativo"<<endl;
 }

}
