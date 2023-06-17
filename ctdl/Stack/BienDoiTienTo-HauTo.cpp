#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	cin >> s;
	stack <string> st;
	for(int i=s.size()-1; i>=0; --i){
		string tmp = string(1, s[i]);
		if(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"){
			string a = st.top(); st.pop();
			string b = st.top(); st.pop();
			tmp = a + b + tmp;
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
