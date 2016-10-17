#include<iostream>

using namespace std;


void Loteria(int gabarito[], int resposta[], int resultado[]){
    int respGab, resp, qtdResp = 0;

    cout<<"--Gabarito de Respostas da Loteria--"<<endl;
    for(int i = 0; i < 13; i++){
        cout<<"Insira a "<<(i+1)<<" resposta do gabarito da Loteria: 1-Coluna, 2-Coluna ou 3-Coluna "<<endl;
        cin>>respGab;
        gabarito[i] = respGab;
    }

    cout<<""<<endl;
    for(int i = 0; i < 20; i++){
        qtdResp = 0;
        cout<<"\nApostador "<<(i+1)<<endl;
        for(int j = 0; j < 13; j++){
            cout<<"Entre com sua "<<(j+1)<<" aposta: 1-Coluna, 2-Coluna ou 3-Coluna"<<endl;
            cin>>resp;
            resposta[j] = resp;
            if(resposta[j] == gabarito[j]){
                qtdResp++;
                }
            }
            resultado[i] = qtdResp;
        }

        cout<<""<<endl;
    for(int i = 0; i < 20; i++){
        if(resultado[i] == 13){
            cout<<"O apostador "<<(i+1)<<" foi o ganhador! teve "<<resultado[i]<<" acertos!"<<endl;
        }else if(resultado[i] < 13){
            cout<<"O apostador "<<(i+1)<<" perdeu. Teve "<<resultado[i]<<" acertos!"<<endl;
        }
    }
}

main(){
setlocale(LC_ALL,"Portuguese");
    int gab[13], resp[13], result[20];

    Loteria(gab, resp, result );

}
