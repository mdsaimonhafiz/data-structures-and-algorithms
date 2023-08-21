#include <bits/stdc++.h>

using namespace std;

void printData(int arr[], int l){
	cout << "Elements: ";
	for(int i=0; i<l; i++){
		cout << arr[i] << " ";
	}
}

void insertionSort(int arr[], int l){
	for(int i=1; i<l; i++){
		int k = arr[i];
		int j = i-1;
		while(j>=0 && k<arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = k;
	}
}
int main(){
	int a[5] = {9, 20, 8, 1, 5};
	insertionSort(a,5);
	printData(a, 5);
	
	
}
