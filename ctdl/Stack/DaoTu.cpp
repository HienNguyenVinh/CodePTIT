#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	getline(cin, s);
	stack <string> st;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		st.push(tmp);
	}
	while(st.size() > 0){
		cout << st.top() << " ";
		st.pop();
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
