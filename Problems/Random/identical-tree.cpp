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

int isIdentical(Node *r1, Node *r2){
	if(r1 == nullptr && r2 == nullptr) return 1;
	if(r1 != nullptr && r2 != nullptr){
		return (r1->key == r2->key && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
	}
	else return 0;
}

int main(){
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->right = new Node(4);
	//~ cout << root->right->left->key;

	Node *root1 = new Node(1);
	root1->left = new Node(2);
	root1->right = new Node(3);
	root1->right->right = new Node(4);
	
	//~ cout << root1->right->left->key;
	cout << isIdentical(root, root1);
}
