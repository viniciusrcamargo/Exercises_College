#include<iostream>

using namespace std;

main(){
    double altura;
    char sexo;

    cout<<"Informe sua altura"<<endl;
    cin>>altura;
    cout<<"\n Informe seu sexo m masculino f feminino"<<endl;
    cin>>sexo;

    if(sexo == 'm'){
        cout<<"Peso ideal masculino "<<(72.7 * altura) - 58;
    }else{
        cout<<"Peso ideal feminino "<<(62.1 * altura) - 44.7;
    }

}
