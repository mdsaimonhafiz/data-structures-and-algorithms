#include<bits/stdc++.h>

using namespace std;

void desc_sort(int a[]){
  //int a[5]={4,3,6,1,3};
  int tmp,i,j;
  for(i=0;i<5;i++){
    tmp=a[i];
    for(j=i+1;j<5;j++){
      if(a[j]>tmp)
        tmp=a[j];
    }
    a[j]=a[i];
    a[i]=tmp;
  }



  //cout<<a[0]<<endl;
}

int main(){
  int t;
  cin>>t;
  //test cases
  while(t--){
    int n,c;
    c=0;//counter
    cin>>n;
    int a[n];
    //take array input
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    //int i=0;
    while(a[0]!=0){

    desc_sort(a);
    if(a[0]!=1){
      a[0]=0;
      c++;
      desc_sort(a);
    }
    else{
      a[0]-=1;
      a[1]-=1;
      c++;
      desc_sort(a);
    }
    }
  cout<<c<<endl;

    //cout<<a[0]<<endl;
}
}
