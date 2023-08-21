#include <bits/stdc++.h>

using namespace std;

class Node {
	public:
	int data;
	Node *left;
	Node *right;
};

Node* createNode(int value){
	Node *newNode = new Node();
	newNode->data = value;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode; 
}

int maxDepth(Node *node){
	if(node == nullptr) return 0;
	else{
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);
		if(lDepth>rDepth) return lDepth+1;
		else return rDepth+1;
	}
}
int main(){
	Node* root = createNode(0);
	root->left = createNode(1);
	root->right = createNode(2);
	root->left->left = createNode(3);
	root->left->right = createNode(4);
	root->left->right->right = createNode(5);
	cout << maxDepth(root);
}
