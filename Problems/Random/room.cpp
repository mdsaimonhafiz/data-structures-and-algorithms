#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,p,q,r;
  r=0;
  cin>>n;
  while(n--){
    cin>>p>>q;
    if((q-p)>=2) r++;
  }
  cout<<r<<endl;
}
