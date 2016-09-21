#include<iostream>
#include<string>

using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    string nome; string sobrenome;
    cout<<"Digite seu nome: ";
    getline(cin, nome);
    cout<<("Digite seu sobrenome: ");
    getline(cin, sobrenome);
    string concatena; concatena = nome + sobrenome;
    cout<< "O seu nome completo é : " + nome + " " + sobrenome << endl;
    }


