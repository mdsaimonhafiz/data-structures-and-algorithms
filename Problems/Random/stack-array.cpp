#include <bits/stdc++.h>

using namespace std;

class Stack{
	public:
	int maxStack;
	int a[maxStack];
	int top;
	Stack(int s){
		maxStack=s;
		top = -1; 
	}
	void Push(int v){
		top = top+1;
		array[top] = v;
	}
};

int main(){
	Stack brick(4);
	
}
