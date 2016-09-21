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
        cout<<"Condição abaixo do peso";
    }else if((imc >= 18.5) &&(imc <= 25)){
        cout<<"Condição peso normal";
    }else if((imc > 25) && (imc < 30)){
        cout<<"Condição acima do peso";
    }else if(imc > 30){
        cout<<"Condição obeso";
    }
}
