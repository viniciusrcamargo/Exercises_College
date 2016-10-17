#include<iostream>

using namespace std;

void Fibonacci(){
 int primeiro = 1, segundo = 1, n, proximo;
 cout<<"Informe um valor n"<<endl;
 cin>>n;

 cout<<primeiro<<", ";
 cout<<primeiro<<", ";
 for(int i = 3; i <= n; i++){
    proximo = primeiro + segundo;
    primeiro = segundo;
    segundo = proximo;
    cout<<", "<<proximo;
 }
}

main(){
setlocale(LC_ALL,"Portuguese");

Fibonacci();

}
