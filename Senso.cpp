#include<iostream>

using namespace std;

main(){
setlocale(LC_ALL,"Portuguese");

    int qtdFilho, cont = 0, contPes= 0;
    double mediaPop = 0, mediaFilho = 0, maiorSal, salario, total = 0, totalFilho = 0, percentual = 0;

    cout<<"Informe a quantidade de filhos"<<endl;
    cin>>qtdFilho;
    cout<<"\nInforme o sal�rio "<<endl;
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
    cout<<"\nInforme o sal�rio "<<endl;
    cin>>salario;
    }
    mediaPop = (total / cont);
    cout<<"\nA m�dia de sal�rio da popula��o � R$ "<<mediaPop<<endl;
    mediaFilho = (totalFilho / cont);
    cout<<"\nA m�dia de quantidade de filhos � "<<mediaFilho<<endl;
    cout<<"\nO maior sal�rio � R$ "<<maiorSal<<endl;
    percentual = (contPes * 100) / cont;
    cout<<"\nPercentual de pessoas com sal�rio at� 1000: "<<percentual<<endl;
}
