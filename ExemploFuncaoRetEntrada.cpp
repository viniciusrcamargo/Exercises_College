#include<iostream>
//       par�metro de    par�metro
//       sa�da          de entrada
//Fun��o com retorno e com entrada

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
cout<<"A soma � "<<soma(a,b);
}
