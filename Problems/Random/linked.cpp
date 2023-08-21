#include <bits/stdc++.h>

using namespace std;

struct Node{
	int mark;
	struct Node *nextRoll;
};

class LinkedList{
	public:
	LinkedList(){
		head = nullptr;
		tail = nullptr;
	}
	void createNode(int mark){
		Node *tmp = new Node;
		tmp->mark = mark;
		tmp->nextRoll = nullptr;
		if(head==nullptr){
			head = tmp;
			tail = tmp;
		}
		else{
			tail->nextRoll=tmp;
			tail = tmp;
			
		}
	}
	void pushNode(int mark){
		Node *tmp = new Node;
		tmp->mark = mark;
		tmp->nextRoll = head;
		head = tmp;
	}
	void printList(){
		Node *current = head;
		while(current != nullptr){
			cout << current->mark << endl;
			current = current->nextRoll;
		}
		
	}
	private:
	Node *head;
	Node *tail;
};

int main(){
	LinkedList l;
	l.createNode(100);
	l.createNode(100);
	l.createNode(87);
	l.pushNode(97);
	l.printList();
	//~ printf("%d",*(l.head));
	return 0;
}
