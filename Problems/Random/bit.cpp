#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,s;
  s=0;
  cin>>n;
  string l;
  while(n--){
    cin>>l;
    if(l[1]=='+') s++;
    else s--;
  }
  cout<<s<<endl;
}
