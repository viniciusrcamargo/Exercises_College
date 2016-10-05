#include<iostream>

using namespace std;

void Vetores(int vet1[], int vet2[]){
 for(int i = 0; i < 10; i++){
    cout<<"Digite o valor "<< (i+1)<<" para o vetor A"<<endl;
    cin>>vet1[i];
  }
  for(int j = 0; j < 10; j++){
    cout<<"Digite o valor "<< (j+1)<<" para o vetor B"<<endl;
    cin>>vet2[j];}
    }




main(){
 int vetA[10], vetB[20];

 Vetores(vetA,vetB);

}
