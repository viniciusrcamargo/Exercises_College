#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

using namespace std;

void sorteio(){
 int coroa = 0, cara = 0;
 srand((unsigned)time(NULL));
 for(int i=0; i<100; i++){
    if((rand()%2)==0){
            cout<<"Coroa "<<endl;
            coroa++;
    } else{
        cout<<"Cara "<<endl;
            cara++;
            }
 }
 cout<<"COROA = "<<coroa<<endl;
 cout<<"CARA = "<<cara;

}

main(){

sorteio();
}
