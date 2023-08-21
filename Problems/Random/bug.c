#include <stdio.h>

int add(int a, int b){
  return a+b;
}

int main(){
  int l,i,sum=0,t;
  scanf("%d", &l);
  for(i=0;i<l;i++){
    printf("%d. = ",i+1);
    scanf("%d",&t);
    sum = add(sum,t);
  }
  printf("avg is %f",(double)sum/l);
  return 0;
}
