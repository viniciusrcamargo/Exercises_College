#include<iostream>
#include<string>

using namespace std;

float Media(float n1, float n2){
 float media = 0;

 media = ((n1*4)+(n2*10))/10;

 return media;
}

String Situacao(float media, int numFaltas){
 String sit;

 if(media >= 7.0 && numFaltas < 16){
    sit = "Aprovado!";
    return sit;
 }else{
    sit = "Reprovado!";
    return sit;
 }
}

main(){
 int numFaltas;
 float nota1, nota2, media = 0;

 cout<<"Informe a primeira nota do aluno "<<endl;
 cin>>nota1;
 cout<<"Informe a segunda nota do aluno "<<endl;
 cin>>nota2;
 cout<<"Informe o n�mero de faltas "<<endl;
 cin>>numFaltas;
 cout<<endl;

 cout<<"A m�dia do aluno � "<<Media(nota1,nota2)<<endl;
 media = Media(nota1,nota2);
 cout<<"O aluno est� "<<Situacao(media,numFaltas);

}
