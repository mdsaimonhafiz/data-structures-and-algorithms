#include <bits/stdc++.h>

using namespace std;

int indexOfMin(int subArr[0], int i, int l){
	int res = i;
	int min = subArr[i];
	for(int k=i;k<l;k++){
		if(min>subArr[k]) {
			min = subArr[k];
			res = k;
		}
		else continue;
	}
	return res;
}

void selection(int Arr[0], int l){
	for(int i=0; i<(l-1); i++){
		int s = indexOfMin(Arr,i, l);
		swap(Arr[i], Arr[s]);
	}
}

int main(){
	int a[5] = {2,34,123,1,34};
	//~ cout << indexOfMin(a, 0, 5);
	//~ swap(a[0], a[3]);
	//~ cout << a[0] << a[3];
	selection(a,5);
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
}
