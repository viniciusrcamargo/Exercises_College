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
 cout<<"\nSeu nome � "<<nome<<" e seu sobrenome � "<<sobrenome;
 //system("PAUSE > null");
 return 0;
}
