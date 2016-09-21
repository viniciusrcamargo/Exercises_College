#include<iostream>

using namespace std;

int potencia(int b, int e){
    int aux = 1, p = 1;
    for(aux = 1; aux <= e; aux++){
        p = p*b;
    }
    return p;
}

main(){
    int y, z, retorno;
    cout<<("Digite a base = ");
    cin>>y;
    cout<<("Digite o expoente = ");
    cin>>z;
    retorno = potencia(y,z);
    cout<<"A potencia de "<<y<<" por "<<z<<" = "<<retorno<<endl;
    //outra forma de chamar a função
    cout<<"A potencia de "<<y<<" por "<<z<<" = "<<potencia(y,z)<<endl;
    //system("pause");
}
