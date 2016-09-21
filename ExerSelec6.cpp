#include<iostream>

using namespace std;

main(){
    int idade;
    setlocale(LC_ALL,"Portuguese");
    cout<<"Informe a idade do nadador"<<endl;
    cin>>idade;

    if((idade >= 5) && (idade <= 7)){
        cout<<"\n Infantil A";
    }else if((idade >= 8) && (idade <= 10)){
        cout<<"\n Infantil B";
    }else if((idade >=11) && (idade <= 13)){
        cout<<"\n Juvenil A";
    }else if((idade >=14) && (idade <= 17)){
        cout<<"\n Juvenil B";
    }else if(idade > 18){
        cout<<"\n Sênior";
    }
}
