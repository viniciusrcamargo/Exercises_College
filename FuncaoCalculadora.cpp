include<iostream>

using namespace std;

void calc(int num1, int num2, char opc){

    int a = num1 ,b = num2;
    double operacao = 0;

    switch(opc){
    case '+':
        operacao = a+b;
        return operacao;
        break;
    case '-':
        operacao = a-b;
        return operacao;
        break;
    case '*':
        operacao = a*b;
        return operacao;
        break;
    case '/':
        operacao = a/b;
        return operacao;
        break;
    }
}

main(){
setlocale(LC_ALL, "Portuguese");

int numero1, numero2;
char opc;

cout<<"***************************************************";
cout<<"Calculadora Simples, Opcoes possiveis: "<<endl;
cout<<"1. Adição "<<endl;
cout<<"2. Subtração "<<endl;
cout<<"3. Multiplicação "<<endl;
cout<<"4. Divisão "<<endl;
cout<<"5. Sair do programa "<<endl;
cout<<"***************************************************";
cout<<"Entre com sua opção"
cin>>opc;
}


}
