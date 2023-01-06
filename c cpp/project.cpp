#include<iostream> 
using namespace std;
#define size 50
int main(){
    int n,i,j;
    n=6;  
      int A[size];
    for(i=0;i<n;i++){
        cin >>A[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i]%2==0){
                int aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<A[i];
    }

}