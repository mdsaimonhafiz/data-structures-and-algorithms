#include<bits/stdc++.h>

using namespace std;

int main(){
  int ar[5] = {11, 2, 3,2,1};
  printf("arr: %u, Value: %d\n",ar, *ar);
  printf("&arr: %d, Value: %d\n",*(&ar), *(ar));
  printf("&arr[0]: %u, Value: %d\n", *ar[0],*(&ar[0]));
  return 0;
}
