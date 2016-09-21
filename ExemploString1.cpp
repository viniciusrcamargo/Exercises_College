#include<iostream>
#include<string>

using namespace std;

main(){
 setlocale(LC_ALL, "Portuguese");

 string vazia;
 string ditado("Casa de ferreiro, espeto de pau ");
 string copia_ditado(ditado);
 string letra(5,'z');//o número é a quantidade de letras que serão impressas
 cout<<"Mostrando a string vazia "<<endl<<vazia<<endl;
 cout<<"Mostrando a string ditado "<<endl<<ditado<<endl;
 cout<<"Mostrando a string copia_ditado "<<endl<<copia_ditado<<endl;
 cout<<"Mostrando o conteúdo da letra Z "<<endl<<letra<<endl;
 //system("pause");
}
