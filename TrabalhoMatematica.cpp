#include<iostream>
#include<stdlib.h>
#include<stdio.h>


using namespace std;


void Matriz(int ln, int cl ,int op){
    int matriz[ln][cl];

    for(int i = 0; i < ln; i++){
        for(int j = 0; j < cl; j++){
            cout<<"Informe um valor para a linha "<<i<<" e coluna "<<j<<endl;
            cin>>matriz[i][j];
        }
    }

    if(op == 1){
        cout<<endl;
        cout<<"Soma dos elementos da matriz "<<endl;
        for(int i = 0; i < ln; i++){
        for(int j = 0; j < cl; j++){
            cout<<matriz[i][j] + matriz[i][j]<<" "<<endl;
            }
        }
    }else
    if(op == 2){
        cout<<endl;
        cout<<"Subtra��o dos elementos da matriz "<<endl;
        for(int i = 0; i < ln; i++){
        for(int j = 0; j < cl; j++){
            cout<<matriz[i][j] - matriz[i][j]<<" "<<endl;
            }
        }
    }else
    if(op == 3){
        cout<<endl;
        cout<<"Multiplica��o dos elementos da matriz "<<endl;
        for(int i = 0; i < ln; i++){
        for(int j = 0; j < cl; j++){
            cout<<matriz[i][j] * matriz[i][j]<<" "<<endl;
            }
        }
    }else
    if(op == 1){
        cout<<endl;
        cout<<"Divis�o dos elementos da matriz "<<endl;
        for(int i = 0; i < ln; i++){
        for(int j = 0; j < cl; j++){
            cout<<matriz[i][j] / matriz[i][j]<<" "<<endl;
            }
        }
    }
}

main(){
    int opc, linha, coluna;

    do{
        cout<<"-----Opera��es com Matrizes-----"<<endl;
        cout<<"1 - Soma:"<<endl;
        cout<<"2 - Subtra��o:"<<endl;
        cout<<"3 - Multiplica��o:"<<endl;
        cout<<"4 - Divis�o:"<<endl;
        cout<<"5 - Sair:"<<endl;
        cin>>opc;
    }while(opc < 0 && opc > 5);

    system("cls");
    cout<<"Informe a quantidade de linhas da matriz"<<endl;
    cin>>linha;
    cout<<"Informe a quantidade de colunas da matriz"<<endl;
    cin>>coluna;
    system("cls");
    int matriz[linha][coluna];

    Matriz(linha,coluna,opc);

}
