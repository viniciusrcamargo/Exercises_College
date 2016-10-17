#include<iostream>

using namespace std;


void Gabarito(char G[], int resultado[], char respostas[]){
    char gab, resp;
    int qtdRespostas = 0;

    cout<<"--Gabarito de Respostas--"<<endl;
    for(int i = 0; i < 3; i++){
        cout<<"Insira a "<<(i+1)<<" resposta do gabarito: A, B, C, D ou E "<<endl;
        cin>>gab;
        G[i] = gab;
    }
    cout<<""<<endl;
    for(int i = 0; i < 2; i++){
        cout<<"Aluno "<<(i+1)<<endl;
        for(int j= 0; j < 3; j++){
            cout<<"Entre com a resposta da "<<(j+1)<<" pergunta "<<endl;
            cin>>resp;
            respostas[j] = resp;
            if(respostas[j] == G[j])
                qtdRespostas++;
            }
            resultado[i] = qtdRespostas;
        }

    cout<<""<<endl;
    for(int i = 0; i < 2; i++){
        if(resultado[i] >= 6){
            cout<<"O aluno "<<(i+1)<<" teve "<<resultado[i]<<" acertos E está aprovado!"<<endl;
        }else if(resultado[i] < 6){
            cout<<"O aluno "<<(i+1)<<" teve "<<resultado[i]<<" acertos E está reprovado!"<<endl;
        }
    }
}

main(){
setlocale(LC_ALL,"Portuguese");
    char gab[3], resp[3];
    int result[2];

    Gabarito(gab, result, resp);

}
