#include<stdio.h>
#define c 101
int main(){
  if(1==0)
    //this is hidden
    printf("My ID is c %d",c);
  else
    printf("conditional compilation understood!");
  return 0;
}
