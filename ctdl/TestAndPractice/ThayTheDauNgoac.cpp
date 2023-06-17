#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	cin >> s;
	stack <char> st;
	deque <string> du;
	for(int i=0; i<s.size(); ++i){
		string tmp = string(1, s[i]);
		if(tmp == "("){
			st.push(s[i]);
		}else if(tmp == ")"){
			st.pop();
			du.push_front("0");
			du.push_front("1");
		}else{
			du.push_front(tmp);
		}
	}
	while(!st.empty()){
		if(st.top() == '('){
			du.push_front("-1");
		}else{
			du.push_back("-1");
		}
		st.pop();
	}
	while(!du.empty()){
		cout << du.front();
		du.pop_front();
	}
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
