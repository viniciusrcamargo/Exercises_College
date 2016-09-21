#include<iostream>
#include<string>

using namespace std;

int main(){
 setlocale(LC_ALL, "Portuguese");

 string nome;
 string sobrenome;

 cout<<"Digite o seu nome "<<endl;
 cin>>nome;
 cout<<"Digite seu sobrenome "<<endl;
 cin>>sobrenome;
 cout<<"\nSeu nome é "<<nome<<" e seu sobrenome é "<<sobrenome;
 //system("PAUSE > null");
 return 0;
}
