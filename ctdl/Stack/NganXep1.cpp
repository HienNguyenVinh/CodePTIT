#include<bits/stdc++.h>

using namespace std;

void handle(){
	int a;
	vector <int> st;
	string s;
	while(cin >> s){
		if(s == "push"){
			cin >> a;
			st.push_back(a);
		}else if(s == "pop"){
			if(!st.empty()){
				st.pop_back();
			}
		}else if(s == "show"){
			if(st.empty()){
				cout << "empty";
			}else{
				for(int i:st){
					cout << i << " ";
				}
			}
			cout << endl;
		}
	}
}
int main(){
	handle();
	return 0;
}
