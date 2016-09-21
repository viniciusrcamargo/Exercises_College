#include<iostream>
//       parâmetro de    parâmetro
//       saída          de entrada
//Função com retorno e com entrada

using namespace std;

int soma(int p1, int p2){
    return(p1 + p2);
}

main(){
setlocale(LC_ALL, "Portuguese");
int a, b;
cout<<"Informe um valor para a "<<endl;
cin>>a;
cout<<"Informe um valor para b"<<endl;
cin>>b;
cout<<"A soma é "<<soma(a,b);
}
