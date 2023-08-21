#include <bits/stdc++.h>

using namespace std;

class Node{
	public:
	int s;
	char key;
	vector<Node> adjKeys;
	Node(char k, int i){
		key = k;
		s = i;
	}
};

int main(){
	vector<Node> graph;
	Node x('X',0);
	Node y('Y',1);
	Node z('Z',2);
	Node w('W',3);
	
	graph.push_back(w);
	graph.push_back(x);
	graph.push_back(y);
	graph.push_back(z);
	
	graph[0].adjKeys.push_back(z);
	graph[1].adjKeys.push_back(w);
	graph[2].adjKeys.push_back(x);
	graph[2].adjKeys.push_back(z);
	graph[2].adjKeys.push_back(w);
	graph[3].adjKeys.push_back(x);
	graph[3].adjKeys.push_back(w);
	
	//BFS
	int status[4] = {0};
	queue<Node> terminal;
	terminal.push(graph[0]);
	status[0] = 1;
	for(int t=0; t<4; t++){
	while(!terminal.empty()){
		cout << terminal.front().key << " ";
		status[terminal.front().s] = 2;
		terminal.pop();
		int l = graph[t].adjKeys.size();
		for(int i=0; i< l; i++){
			if(status[graph[t].adjKeys[i].s] == 0){
				terminal.push(graph[t].adjKeys[i]);
				status[graph[t].adjKeys[i].s] = 1;
			}
			
		}
		
	}
	}
}


