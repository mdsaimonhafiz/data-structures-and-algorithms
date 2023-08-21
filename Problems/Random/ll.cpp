#include <bits/stdc++.h>

using namespace std;

class Node{
	public:
		int value;
		Node *next;
};

int main(){
	
	Node A;
	Node B;
	Node C;
	Node *header = &A;
	A.value = 30;
	B.value = 20;
	C.value = 10;
	A.next = &B;
	B.next = &C;
	C.next = NULL;
	Node ab;
	ab.value = 25;
	ab.next = A.next;
	A.next = &ab;
	Node *current = header;
	while(current != NULL){
		printf("%d\n", *current);
		current = current->next;
	}
	
}
