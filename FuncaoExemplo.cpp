#include<iostream>
//       par�metro de    par�metro
//       sa�da          de entrada
//Fun��o com retorno e sem entrada

using namespace std;

int soma(){
    int a, b;
    cout<<("Informe a ")<<endl;
    cin>>(a);
    cout<<("Informe b")<<endl;
    cin>>(b);
    return(a+b);
}
main(){
setlocale(LC_ALL,"Portuguese");

    //chamada da fun��o
    cout<<"A soma � "<<soma()<<endl;
    //chamada da fun��o com captura do processamento
    /*int ret_Soma;
    ret_Soma = soma();
    if(ret_Soma > 0)
        cout<<"Valor maior que 10";
    else
        cout<<"Valor menor que 10";*/

}
