#include<iostream>

using namespace std;

main()
{
setlocale(LC_ALL,"Portuguese");

int n1, n2;

cout<<"Informe número 1"<<endl;
cin>>n1;
cout<<"Informe número 2"<<endl;
cin>>n2;

if(n1==n2){
    cout<<"Números iguais!"<<endl;
}else
 if(n1>n2){
    cout<<"Número um é maior "<<n1;
 }
 else{
    cout<<"Número dois é maior "<<n2;
 }

}
