#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	cin >> s;
	stack <string> st;
	for(int i=0; i<s.size(); ++i){
		string tmp = string(1, s[i]);
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			string x = st.top(); st.pop();
			string y = st.top(); st.pop();
			tmp = tmp + y + x;
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
