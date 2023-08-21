#include <bits/stdc++.h>

using namespace std;

class Node {
	int data;
	Node *left;
	Node *right;
	Node(int d){
		data = d;
		left = nullptr;
		right = nullptr;
	}
};

Node *successorNode(Node *node){
	Node *current = node;
	while(current && current->left != nullptr){
		current = current->left;
	}
	return current;
}
Node *insertBST(Node *r, int d){
	if(r==nullptr){
		r = new Node(d);
	}
	else{
		if(r->data>d){
			r->left = insertBST(r->left, d);
		}
		else r->right = insertBST(r->right, d);
	}
	return r;
}

Node *deleteBST(Node *r, int d){
	if(r==nullptr) return r;
	if(r->data > d) r->left = deleteBST(r->left, d);
	else if(r->data <d) r->right = deleteBST(r->right, d);
	else{
		if(r->left == nullptr and r->right == nullptr) return nullptr;
		else if(r->left == nullptr) {
			r->data = r->right->data;
			r->right = nullptr;
			return r;
		}
		else if(r->right == nullptr){
			r->data = r->left->data;
			r->left = nullptr;
			return r;
			
		}
		Node *tmp = successorNode(r->right);
		r->data = tmp->data;
		r->right = deleteBST(r->right, tmp->data);
	}
	return r;
}

void inorderDisplay(Node *r){
	if(r!=nullptr){
		inorderDisplay(r->left);
		cout << r->data << " ";
		inorderDisplay(r->right);
	}
}
int main(){
	Node *root = nullptr;
	root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
 
    cout << "Inorder traversal of the given tree \n";
    inorder(root);
 
    cout << "\nDelete 20\n";
    root = deleteNode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 30\n";
    root = deleteNode(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 50\n";
    root = deleteNode(root, 50);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    return 0;
	
	
	
}
