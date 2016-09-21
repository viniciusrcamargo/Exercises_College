#include<iostream>

using namespace std;

main(){
    int idade;
    double salarioBruto, reaj, gratif, desconto, salarioLiquido;

    cout<<"Informe sua idade\n"<<endl;
    cin>>idade;
    cout<<"\n Informe o salario bruto"<<endl;
    cin>>salarioBruto;
    reaj = salarioBruto * 0.38;
    gratif = salarioBruto * 0.20;
    salarioLiquido = salarioBruto + (reaj + gratif);
    desconto = salarioLiquido * 0.15;
    salarioLiquido -= desconto;
    cout<<"\n Idade = "<<idade<<endl;
    cout<<"\n Salario Bruto = R$ "<<salarioBruto<<endl;
    cout<<"\n Salario Liquido = R$ "<<salarioLiquido<<endl;
    cout<<"\n Reajuste = R$ "<<reaj<<endl;
    cout<<"\n Gratificação = R$ "<<gratif<<endl;
    cout<<"\n Desconto = R$ "<<desconto<<endl;
}
