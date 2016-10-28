#include<iostream>
#include<stdlib.h>


using namespace std;


void Matriz(int matriz[][], int opc, int ln, int cl){

    for(int i = 0; i < ln; i++){
        for(int j = 0; j < cl; j++){
            cout<<"Informe um valor para a "<<i<<" linha e "<<j<<" coluna "<<endl;
            cin>>matriz[i][j];
        }
    }
    if(opc == 1){

    }
}

main(){
setlocale(LC_ALL,"Portuguese");

    int linha, coluna, op;

    do{
        cout<<"-----Operações com matrizes-----"<<endl;
        cout<<"1 - Soma "<<endl;
        cout<<"2 - Subtração "<<endl;
        cout<<"3 - Multiplicação "<<endl;
        cout<<"4 - Divisão "<<endl;
        cout<<"0 - Sair "<<endl;
        cin>>op;
    }while(op > 0 && op <= 4);

    system("cls");

    cout<<"Informe a quantidade de linhas da matriz "<<endl;
    cin>>linha;
    cout<<"Informe a quantidade de colunas da matriz "<<endl;
    cin>>coluna;

    int matriz[linha][coluna];

    Matriz(matriz, op, linha, coluna);


}
