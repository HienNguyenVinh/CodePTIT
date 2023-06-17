#include<bits/stdc++.h>

using namespace std;

int prio(char x){
	if(x == '^'){
		return 4;
	}else if(x == '*' || x == '/'){
		return 3;
	}else if(x == '+' || x == '-'){
		return 2;
	}
	return 1;
}
void handle(){
	string s;
	cin >> s;
	stack <char> st;
	string res = "";
	for(int i=0; i<s.size(); ++i){
		if(s[i] == '('){
			st.push(s[i]);
		}else if(s[i] == ')'){
			while(st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop();
		}else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
			while(!st.empty() && prio(s[i]) <= prio(st.top())){
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}else{
			res += s[i];
		}
	}
	while(!st.empty()){
		if(st.top() != '('){
			res += st.top();
		}
		st.pop();
	}
	cout << res;
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
