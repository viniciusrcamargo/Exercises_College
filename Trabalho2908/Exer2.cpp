#include<iostream>

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");

    double peso, altura, imc = 0;

    cout<<"Informe o seu peso"<<endl;
    cin>>peso;
    cout<<"\n Informe a sua altura"<<endl;
    cin>>altura;
    imc = peso / (altura * altura);

    if( imc == 18.5){
        cout<<"Condi��o abaixo do peso";
    }else if((imc >= 18.5) &&(imc <= 25)){
        cout<<"Condi��o peso normal";
    }else if((imc > 25) && (imc < 30)){
        cout<<"Condi��o acima do peso";
    }else if(imc > 30){
        cout<<"Condi��o obeso";
    }
}
