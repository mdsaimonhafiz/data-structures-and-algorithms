#include <bits/stdc++.h>

using namespace std;

class Node{
	public:
	int key;
	Node *left, *right;
	Node(int k){
		key = k;
		left = right = nullptr;
	}
};

void mirror(Node *r){
	if(r == nullptr){
		return;
	}
	else{
		mirror(r->left);
		mirror(r->right);
		Node *tmp;
		tmp = r->left;
		r->left = r->right;
		r->right = tmp;
	}
}

int main(){
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->left = new Node(4);
	mirror(root);
	cout << root->left->right->key;
}
