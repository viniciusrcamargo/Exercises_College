#include<iostream>

using namespace std;

main(){

setlocale(LC_ALL,"Portuguese");

    double metroC = 1.50, metroZ = 1.10;
    int anos = 0;

    while(metroZ < metroC){
        metroC += 0.02;
        metroZ += 0.03;
        anos++;
    }
    cout<<"A quantidade de anos necess�rias para o Z� ultrapassar a altura do Chico � "<<anos<<" anos"<<endl;
    cout<<"\nAltura do Chico "<<metroC<<endl;
    cout<<"\nAltura do Ze "<<metroZ<<endl;

}
