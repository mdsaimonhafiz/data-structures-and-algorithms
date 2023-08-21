#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  char c;
  cin>>n;
  while(n--){
    cin>>c;
    if(c=='c' || c=='d' || c=='e' || c=='f' || c=='o' || c=='r' || c=='s')
      cout<<"YES"<<endl;
    else 
      cout<<"NO"<<endl;
  }
}
