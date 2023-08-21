#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> mark;
	mark.insert(40);
	mark.insert(50);
	mark.insert(70);
	mark.insert(40);
	mark.insert(90);
	set<int> :: iterator i;
	for(i=mark.begin(); i!=mark.end(); i++)
		cout << *i << " ";
	
}
