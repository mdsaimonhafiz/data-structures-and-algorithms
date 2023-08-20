#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> toSort){
    int l = toSort.size();
    for(int i=0; i<l-1; i++){
        for(int j=0; j<(l-i-1); j++){
            if(toSort[j]>toSort[j+1]) swap(toSort[j], toSort[j+1]);
        }
    }
    return toSort;
}

void printVector(vector<int> p){
    for(int i=0; i<p.size(); i++){
        cout << p[i] << " ";
    }
}
int main(){
    vector<int> s = {2,3,4521,131,13};
    vector<int> r = bubbleSort(s);
    printVector(r);
    cout << endl;
    printVector(s);

}