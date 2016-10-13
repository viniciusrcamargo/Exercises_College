#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void Intercala(int A[], int B[], int C[]){
    int j = 0;

    for(int i = 0; i < 10; i++){
        C[j] = A[i];
        j++;
        C[j] = B[i];
        j++;
    }
    }

int main(){

    int A[10], B[10], C[20], i;
    srand((unsigned)time(NULL));
    for(i = 0; i<10; i++)
    {
        A[i]=rand()%50;
        B[i]=rand()%50;
    }
    Intercala(A,B,C);

    for(int i = 0; i<10; i++){
        cout<<"A = "<<A[i]<<endl;
    }
    for(int i = 0; i<10; i++){
        cout<<"B = "<<B[i]<<endl;
    }
    for(int i = 0; i<20; i++){
        cout<<"C = "<<C[i]<<endl;
    }
}



