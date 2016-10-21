#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;


int main() {
 string vazia;
 string ditado("Casa de ferreiro, espeto de pau");
 string copia_ditado(ditado);
 string letra_z( 42, 'z');

 cout <<"Mostrando o conteúdo da string 'vazia':" << endl;
 cout << vazia;
 cout <<"\nMostrando o conteúdo da string 'ditado': "<<endl;
 cout << ditado;
 cout <<"\nMostrando o conteúdo da string 'copia_ditado': "<< endl;
 cout << copia_ditado;
 cout <<"\nMostrando o conteúdo da string 'letra_z': "<< endl;
 cout << letra_z;
 system("PAUSE > null");
 return 0;

 }
