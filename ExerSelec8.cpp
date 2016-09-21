#include<iostream>

using namespace std;

main(){
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe n1"<<endl;
    cin>>n1;
    cout<<"\n Informe n2"<<endl;
    cin>>n2;

    if((n1 >= 0) && (n2 < 100)){
        if(n1 > n2){
            cout<<"\n A soma é = "<<n1+n2<<endl;
        }else if(n1 < n2){
            cout<<"\n A multiplicação é = "<<n1 * n2<<endl;
            }else if(n1 == n2){
                cout<<"\n A divisão é = "<<n1 / n2<<endl;
            }
    }

}
