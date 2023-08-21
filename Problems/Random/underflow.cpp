#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int k;
	for(k=n;k>=2;k--){
	int i;
		for(i=0;i<(k-1);i++){
			if(array[i]<array[i+1]){
				int tmp;
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout << array[i] << " ";
	}
}
