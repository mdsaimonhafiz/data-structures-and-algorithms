#include <bits/stdc++.h>

using namespace std;

class Node {
	public:
	int key;
	Node *left, *right;
	Node(int k){
		key = k;
		left = right = nullptr;
	}
};

void insertBST(int k, Node *root){
	if(root == nullptr){
		root = new Node(k);
	}
	else{
		
	}
}
int main(){
	int a[5] = {1,4,3,6,0};
	
}
