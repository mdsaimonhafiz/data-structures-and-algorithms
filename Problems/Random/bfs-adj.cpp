
#include<bits/stdc++.h>

using namespace std;

class Edges{
	public:
	int Vertex;
	vector<int> adjList;
	Edges(int v, vector<int> l){
		Vertex = v;
		adjList = l;
	}
};

void bfs(Edges)

int main(){
	Edges zero(0,{1,2,3});
	Edges one(1,{0,2});
	Edges two(2,{0,1,4});
	Edges three(3,{0});
	Edges four(4,{2});
	//~ one.Vertex = 1;
	//~ one.adjList.push_back(0);
	//~ one.adjList.push_back(2);
}
