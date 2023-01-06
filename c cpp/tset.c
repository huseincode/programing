#include<stdio.h>
#include<string.h>
#include<math.h>
#define size 50
void func(int value){
  value=15;
  printf("%d ",value);
}
int main(){
  int value=5;
func(value);
printf("%d ",value);
}