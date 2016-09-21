#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, tra1, tra2;
    double media = 0;

    cout<<"Informe nota 1"<<endl;
    cin>>n1;
    cout<<"\n Informe nota 2"<<endl;
    cin>>n2;
    cout<<"\n Informe trabalho 1"<<endl;
    cin>>tra1;
    cout<<"\n Informe trabalho 2"<<endl;
    cin>>tra2;
    media = (((n1+n2)/2)*0.6) + (((tra1+tra2)/2)*0.4);
    if((media>0) && (media<=4)){
        cout<<"Aluno reprovado!";
    }else if((media>6) && (media<=10)){
        cout<<"Aluno aprovado!";
    }else if(media == 5){
        cout<<"Aluno em recuperação";
    }
}
