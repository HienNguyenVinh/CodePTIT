#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	cin >> s;
	stack <char> st;
	int open = 0, close = 0;
	for(int i=0; i<s.size(); ++i){
		if(s[i] == '('){
			st.push(s[i]);
			++open;
		}else{
			if(!st.empty() && st.top() == '('){
				--open;
				st.pop();
			}else{
				++close;
				st.push(s[i]);
			}
		}
	}
	int res = open/2 + close/2;
	res += open%2 + close%2;
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
