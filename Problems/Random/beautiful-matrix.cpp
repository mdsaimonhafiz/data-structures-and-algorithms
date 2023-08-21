#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,i,j;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      cin>>a;
      if(a==1)break;
    }
    if(a==1)break;
  }
  cout<<abs(i-2)+abs(j-2)<<endl;
}
