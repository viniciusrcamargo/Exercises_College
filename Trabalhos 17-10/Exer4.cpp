#include<iostream>

using namespace std;


void Produto(int F[], int G[]){

    for(int i = 0; i < 20; i++){
        cout<<"Informe um valor o " << (i+1)<<" do primeiro vetor"<<endl;
        cin>>F[i];
    }
    for(int i = 0; i < 20; i++){
    cout<<"Informe um valor o " << (i+1)<<" do segundo vetor"<<endl;
    cin>>G[i];
    }
    cout<<("");
    for(int i = 0; i < 20; i++)
        cout<<"O produto do "<<(i+1)<<" valor dos vetores 1 e 2 é = "<<(F[i] * G[i])<<endl;
}

main(){
setlocale(LC_ALL,"Portuguese");
    int vetorA[20], vetorB[20];

    Produto(vetorA,vetorB);

}
