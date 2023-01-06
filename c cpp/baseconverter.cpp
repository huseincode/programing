#include<iostream>
using namespace std;

int read_num(){
    int n;
    cout<<"Enter your number:\n";
    cin>>n;
    return n;
}
int baseA_reader(){
    int A;
    cout<<"Enter base A:\n";
    cin>>A;
    return A;
}
int convert_to_baseA(int number,int A){
    int d;
    int total=0,pos=1;
    while(number!=0){
        d=number%10;
        number/=10;
        total+=d*pos;
        pos*=A;
    }
    return total;
}
int baseB_reader(){
    int B;
    cout<<"Enter base B:\n";
    cin>>B;
    return B;
}
int baseA_to_baseB(int number,int A,int B){
    int d;
    int total=0;
    int pos=1;
    while(number!=0){
        d=number%B;
        number/=B;
        total+=d*pos;
        pos*=10;
    }
   cout<<"The number from base "<<A<<" to base "<<B<<" is :\n"<<total;
   return total;
}
int main(){
    int N,A,B;
    N=read_num();
    A=baseA_reader();
   int d= convert_to_baseA(N,A);
    B=baseB_reader();
  
}