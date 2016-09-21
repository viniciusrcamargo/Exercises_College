#include<iostream>

using namespace std;

main(){
float salbruto, saltotal, reaj, gratif, desc;
int idade;

setlocale(LC_ALL, "Portuguese");

cout<<"Informe o salário bruto"<<endl;
cin>>salbruto;
cout<<"\n Informe a idade"<<endl;
cin>>idade;
reaj=salbruto*0.38;
gratif = salbruto*0.20;
saltotal = salbruto+reaj+gratif;
desc = saltotal*0.15;
cout<<"\n O valor do salário bruto é R$ "<<salbruto<<endl;
cout<<"\n O valor do reajuste é R$ "<<reaj<<endl;
cout<<"\n O valor da gratificação é R$ "<<gratif<<endl;
cout<<"\n O valor do salário total é R$ "<<saltotal;
}
