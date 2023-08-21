#include<bits/stdc++.h>

using namespace std;

class Node{
	public:
	int key;
	Node *lChild, *rChild;
	Node(int k){
		key = k;
		lChild = rChild = nullptr;
	}
};

int Depth(Node *r){
	if(r == nullptr) return 0;
	int lDepth = Depth(r->lChild);
	int rDepth = Depth(r->rChild);
	if(lDepth>rDepth) return lDepth+1;
	return rDepth+1;
}

void preOrder(Node *root){
	if(root == nullptr) return;
	cout << root->key;
	preOrder(root->lChild);
	preOrder(root->rChild);
}

bool isSameTree(Node *r1, Node *r2){
	if(r1 == nullptr && r2 == nullptr) return 1;
	if(r1 != nullptr && r2 != nullptr) return (
		(r1->key == r2->key) && (isSameTree(r1->lChild, r2->lChild)) && (isSameTree(r1->rChild, r2->rChild))
	);
	return 0;
}
int main(){
	
	Node *tree = new Node(0);
	tree->lChild = new Node(1);
	tree->rChild = new Node(20);
	tree->lChild->rChild = new Node(3);
	tree->lChild->lChild = new Node(4);
	tree->lChild->lChild->rChild = new Node(4);
	Node *treeA = new Node(0);
	treeA->lChild = new Node(1);
	treeA->rChild = new Node(20);
	treeA->lChild->rChild = new Node(3);
	treeA->lChild->lChild = new Node(4);
	treeA->lChild->lChild->rChild = new Node(4);
	preOrder(treeA);
	cout << Depth(tree);
	cout << isSameTree(tree, treeA);
}

