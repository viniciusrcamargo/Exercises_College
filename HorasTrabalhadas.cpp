#include<iostream>
#include<stdlib.h>

using namespace std;

main(){
 float horasTrab, inss, ir, salBruto=0, salLiquido=0;
 int numdepend;

 cout<<"Informe a quantidade de horas trabalhadas "<<endl;
 cin>>horasTrab;
 cout<<"\nInforme a quantidade de dependentes se houver"<<endl;
 cin>>numdepend;
 salBruto = horasTrab * 12;
 if(numdepend > 0){
    salBruto += numdepend * 40;
 }
 inss = salBruto * 0.05;
 ir = salBruto * 0.085;
 salLiquido = salBruto - (inss+ir);

 cout<<"\nSalario bruto = R$ "<<salBruto;
 cout<<"\nSalario Liquido = R$ "<<salLiquido;
 cout<<"\nINSS = R$ "<<inss;
 cout<<"\nIR R$ = "<<ir;
}
