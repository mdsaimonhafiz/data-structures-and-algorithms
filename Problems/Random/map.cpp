
#include <bits/stdc++.h>

using namespace std;

int main(){
	map<int, string> student;
	student[1] = "Jacqueline";
	student[2] = "Blake";
	//~ cout << student[1];
	student.insert(make_pair(3, "Alex"));
	//~ cout << student[3];
	student[3] = "Cardoso";
	//~ cout << student.size();
	//~ cout << student[3];
	
	//~ for(int i=1; i<=(int)student.size(); i++){
		//~ cout << student[i] << " ";
	//~ }
	
	// map iterator
	map<int, string>::iterator j;
	for(j = student.begin(); j!= student.end(); j++)
		cout << j->second << " " << (*j).first; 
	cout << student.find(4)->second;
}
