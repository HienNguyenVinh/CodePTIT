#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	cin >> s;
	stack <string> st;
	for(int i=0; i<s.size(); ++i){
		string tmp = string(1, s[i]);
		if(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"){
			string x = st.top(); st.pop();
			string y = st.top(); st.pop();
			tmp = "(" + y + tmp + x + ")";
		}
		st.push(tmp);
	}
	cout << st.top();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
