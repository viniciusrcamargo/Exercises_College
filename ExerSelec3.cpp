#include<iostream>

using namespace std;

main()
{
setlocale(LC_ALL,"Portuguese");

int n1, n2;

cout<<"Informe n�mero 1"<<endl;
cin>>n1;
cout<<"Informe n�mero 2"<<endl;
cin>>n2;

if(n1==n2){
    cout<<"N�meros iguais!"<<endl;
}else
 if(n1>n2){
    cout<<"N�mero um � maior "<<n1;
 }
 else{
    cout<<"N�mero dois � maior "<<n2;
 }

}
