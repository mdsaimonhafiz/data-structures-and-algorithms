#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> g[5];
int visit[5] = {0};
queue<int> temp;
g[1].insert(g[1].end(), {2,4});
g[2].insert(g[2].end(), {1,3});
g[3].insert(g[3].end(), {2,4});
g[4].insert(g[4].end(), {1,3});
temp.push(1);
visit[1] = 1;
int curr;
while(!temp.empty()){
	curr = temp.front();
	for(int i=0; i< (int)g[curr].size(); i++){
		if(visit[g[curr][i]] == 0){
			temp.push(g[curr][i]);		
visit[g[curr][i]] = 1;	
		}	
		
	}
	cout << curr << " ";
temp.pop();
}
}
