#include<iostream>

using namespace std;


int VetorNulos(int vetor1[], int vetor2[]){
  int valor;

  for(int i = 0; i < 30; i++){
    cout<<"Informe um valor para a posição "<<(i+1)<<" do vetor"<<endl;
    cin>>valor;
    vetor1[i] = valor;
    if(valor == 0)
        vetor2[i] = 1;
    else
    vetor2[i] = valor;
  }
    cout<<""<<endl;
    cout<<"Vetor 1 = ";
    for(int i = 0; i < 30; i++){
        cout<<vetor1[i]<< " ";
    }
    cout<<""<<endl;
    cout<<"Vetor 2 = ";
    for(int i = 0; i < 30; i++){
        cout<<vetor2[i]<< " ";
    }
}

main(){
    int vet1[30], vet2[30];

    VetorNulos(vet1,vet2);
}
