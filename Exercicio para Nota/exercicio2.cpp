#include<iostream>

using namespace std;

char retornaLetra(){
  setlocale(LC_ALL,"Portuguese");

  char letra;
  bool opc = false;
  cout<<"Informe um caracter para o calculo - S - SIM ou N - Não"<<endl;
  cin>>letra;
  do{
  if((letra == 'S') or (letra == 'N') or (letra == 'n') or (letra == 's')){
    return letra;
    opc = true;}
  else{
    cout<<"Caracter inválido!"<<endl;
    cout<<"Tente novamente!"<<endl;
    cout<<"Informe um caracter para o calculo - S - SIM ou N - Não"<<endl;
    cin>>letra;
  }

  }while(opc == false);
}

main(){
    setlocale(LC_ALL,"Portuguese;");

    int num;
    double cubo = 0;
    retornaLetra();
    //cout<<"Retorno "<<retornaLetra();
    while((retornaLetra() == 'S') and (retornaLetra() == 's')){
        cout<<"Informe um número ";
        cin>>num;
        cubo = num * 3;
        cout<<"O cubo é "<<cubo;
    }

    }

