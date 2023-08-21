#include <bits/stdc++.h>

using namespace std;

void insertionSort(int elements[], int len){
	for(int i=1; i<len; i++){
		int data = elements[i];
		for(int j=i-1; j>=0; j--){
			if(elements[j+1]<elements[j]){
				swap(elements[j+1], elements[j]);
				
			}
			else break;
		}
	}
}


int main(){
	int testData[5] = {23, 0, 90, 3, 1};
	insertionSort(testData, 5);
	cout << testData[4];
}
