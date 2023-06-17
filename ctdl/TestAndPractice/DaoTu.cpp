#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	stack <char> st;
	while(ss >> tmp){
		
		for(int i=0; i<tmp.size(); ++i){
			st.push(tmp[i]);
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << " ";
	}
	
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
