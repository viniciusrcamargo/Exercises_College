#include<iostream>

using namespace std;

main()
{
    int n1,n2;

    setlocale(LC_ALL,"Portuguese");
    cout<<"\n Informe n�mero 1"<<endl;
    cin>>n1;
    cout<<"\n Informe n�mero 2"<<endl;
    cin>>n2;
    if(n1>n2){
    cout<<"\n A diferen�a = "<<(n1-n2)<<endl;
    }
    else{
    cout<<"A diferen�a = "<<(n2-n1)<<endl;
    }
}
