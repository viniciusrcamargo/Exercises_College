#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;
int main() {
    string nome;
    string sobrenome;

    cout<<"Digite seu nome: ";
    getline(cin, nome);
    cout<<"Digite seu sobrenome: ";
    getline(cin, sobrenome);
    cout <<"Seu nome � "<<nome<<" e seu sobrenome � "<<sobrenome<<"."<<endl;
    system("PAUSE > null");

    return 0; }
