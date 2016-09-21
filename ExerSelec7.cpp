#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    float nota1, nota2, media=0, total=0;
    int aulasMinist, aulasAssist;

    cout<<"Informe a nota 1"<<endl;
    cin>>nota1;
    cout<<"\n Informe a nota 2"<<endl;
    cin>>nota2;
    cout<<"\n Informe a qtde. de aulas ministradas"<<endl;
    cin>>aulasMinist;
    cout<<"\n Informe a qtde. de aulas assistidas"<<endl;
    cin>>aulasAssist;
    media = (nota1 + nota2) / 2;
    total = (aulasAssist * 100) / aulasMinist;
    if((media >= 6) && (total >=75))
    {
        cout<<"Aluno Aprovado!";
    }
    else //if ((media < 6) && (totalAssist < 0.75))
    {
        cout<<"Aluno Reprovado!";
    }

    //cout<<"\n Total de aulas assistidas"<<aulasAssist;

}
