#include<iostream>

using namespace std;

main()
{
    int n1,n2;

    setlocale(LC_ALL,"Portuguese");
    cout<<"\n Informe número 1"<<endl;
    cin>>n1;
    cout<<"\n Informe número 2"<<endl;
    cin>>n2;
    if(n1>n2){
    cout<<"\n A diferença = "<<(n1-n2)<<endl;
    }
    else{
    cout<<"A diferença = "<<(n2-n1)<<endl;
    }
}
