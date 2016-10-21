#include<iostream>

using namespace std;

void Primo(int K[], int P[]){

    for(int i = 0; i < 15; i++){
        cout<<"Informe um valor para a "<<(i+1)<<" posição do vetor"<<endl;
        cin>>K[i];
    }

    cout<<""<<endl;

    for(int i =0; i < 15; i++){
            for(int j = 2; j < K[i]; j++){
                if(K[i] % j != 0){//
                    P[j] = K[i];
                }
            }

    }
    cout<<"Números primos digitados = ";
    for(int i = 0; i < sizeof(P); i++){
        cout<<P[i]<<" ";
    }


    //return P[15];

}

main(){

setlocale(LC_ALL,"Portuguese");

    int A[15], B[15];

    Primo(A,B);
    //cout<<"Números primos digitados = ";
    //for(int i = 2; i < 15; i++){
      //cout<<Primo(A,B)<<", ";
    //}
}
