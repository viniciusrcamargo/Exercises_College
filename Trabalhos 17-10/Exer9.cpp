#include<iostream>

using namespace std;


void Gabarito(char G[], int resultado[], char respostas[]){
    char gab, resp;
    int qtdRespostas = 0;

    cout<<"--Gabarito de Respostas--"<<endl;
    for(int i = 0; i < 10; i++){
        cout<<"Insira a "<<(i+1)<<" resposta do gabarito: A, B, C, D ou E "<<endl;
        cin>>gab;
        G[i] = gab;
    }

    cout<<""<<endl;
    for(int i = 0; i < 50; i++){
        qtdRespostas = 0;
        cout<<"\nAluno "<<(i+1)<<endl;
        for(int j = 0; j < 10; j++){
            cout<<"Entre com a resposta da "<<(j+1)<<" pergunta "<<endl;
            cin>>resp;
            respostas[j] = resp;
            if(respostas[j] == G[j]){
                qtdRespostas++;
                }
            }
            resultado[i] = qtdRespostas;
            //cout<<"\nQuantidade de respostas certas do "<<(i+1)<<" aluno = ";
            //cout<<resultado[i];
        }

    cout<<""<<endl;
    for(int i = 0; i < 50; i++){
        if(resultado[i] >= 6){
            cout<<"O aluno "<<(i+1)<<" teve "<<resultado[i]<<" acertos E est� aprovado!"<<endl;
        }else if(resultado[i] < 6){
            cout<<"O aluno "<<(i+1)<<" teve "<<resultado[i]<<" acertos E est� reprovado!"<<endl;
        }
    }
}

main(){
setlocale(LC_ALL,"Portuguese");
    char gab[10], resp[10];
    int result[50];

    Gabarito(gab, result, resp);

}
