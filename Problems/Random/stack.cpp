#include <bits/stdc++.h>

using namespace std;

class Node{
	public:
	int data;
	Node *next;
};

class Stack{
	private:
	Node *top;
	public:
	Stack(){
		top = nullptr;
	}
	void Push(int value){
		Node *n = new Node();
		n->data = value;
		if(top!=nullptr){
			n->next = top;
		}
		else n->next = nullptr;
		top = n;
	}
	void Pop(){
		if(top==nullptr){
			cout << "Underflow Error!";
			return;
		}
		top = top->next;
	}
	void PrintStack(){
		Node* current = top;
		while(current!=nullptr){
			cout << "| "<< current->data <<" |"<< endl <<"-----"<<endl;
			current = current->next;
		}
	}
};

int main(){
	Stack brick;
	brick.Push(6);
	brick.Push(5);
	brick.Push(4);
	brick.Push(3);
	brick.Push(1);
	brick.Pop();
	brick.Push(1);
	brick.PrintStack();
	
	
}

