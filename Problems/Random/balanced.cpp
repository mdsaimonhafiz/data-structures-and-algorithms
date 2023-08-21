
#inlcude <bits/stdc++.h>

using namespace std;

class Node{
	public:
	int val;
	Node *left, *right;
};

Node *newNode(int v){
	Node *n = new Node();
	Node->val = v;
	Node->left = nullptr;
	Node->right = nullptr;
	return n;
}
