#include <bits/stdc++.h>

using namespace std;


vector<int> mergeArray(vector<int> arr,vector<int> brr){
	//~ int l = arr.size() + brr.size();
	vector<int> res;
	int i,j;
	for(i=0,j=0; (i<arr.size()) && (j<brr.size()); ){
		if(arr[i]>brr[j]){
			res.push_back(brr[j]);
			j++;
			
		}
		else{
			res.push_back(arr[i]);
			i++;
		}
	}
	if(arr.size() > brr.size()){
		for(i=i; i<arr.size(); i++) res.push_back(arr[i]);
	}
	if(arr.size() < brr.size()) {
		for(j=j; j<brr.size(); j++) res.push_back(brr[j]);
	}
	return res;
}
int main(){
	vector<int> arr1 {23,24,45,65,66};
	vector<int> arr2 {21,22,35,55,65};
	vector<int> o = mergeArray(arr1, arr2);
	for(int i=0; i<o.size(); i++){
		cout << o[i] << " ";
	}
}
