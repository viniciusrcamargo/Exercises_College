#include<iostream>
#include<string>

using namespace std;

main(){
 setlocale(LC_ALL, "Portuguese");

 string vazia;
 string ditado("Casa de ferreiro, espeto de pau ");
 string copia_ditado(ditado);
 string letra(5,'z');//o n�mero � a quantidade de letras que ser�o impressas
 cout<<"Mostrando a string vazia "<<endl<<vazia<<endl;
 cout<<"Mostrando a string ditado "<<endl<<ditado<<endl;
 cout<<"Mostrando a string copia_ditado "<<endl<<copia_ditado<<endl;
 cout<<"Mostrando o conte�do da letra Z "<<endl<<letra<<endl;
 //system("pause");
}
