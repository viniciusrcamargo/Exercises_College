#include<iostream>

using namespace std;

main(){
setlocale(LC_ALL,"Portuguese");

    int qtdFilho, cont = 0, contPes= 0;
    double mediaPop = 0, mediaFilho = 0, maiorSal, salario, total = 0, totalFilho = 0, percentual = 0;

    cout<<"Informe a quantidade de filhos"<<endl;
    cin>>qtdFilho;
    cout<<"\nInforme o salário "<<endl;
    cin>>salario;

    while(salario > 0){

    total += salario;
    if(qtdFilho > 0){
        totalFilho += qtdFilho;
    }
    if(salario <= 1000){
        contPes++;
    }
    if(salario > maiorSal){
        maiorSal = salario;
    }
    cont++;
    cout<<"Informe a quantidade de filhos"<<endl;
    cin>>qtdFilho;
    cout<<"\nInforme o salário "<<endl;
    cin>>salario;
    }
    mediaPop = (total / cont);
    cout<<"\nA média de salário da população é R$ "<<mediaPop<<endl;
    mediaFilho = (totalFilho / cont);
    cout<<"\nA média de quantidade de filhos é "<<mediaFilho<<endl;
    cout<<"\nO maior salário é R$ "<<maiorSal<<endl;
    percentual = (contPes * 100) / cont;
    cout<<"\nPercentual de pessoas com salário até 1000: "<<percentual<<endl;
}
