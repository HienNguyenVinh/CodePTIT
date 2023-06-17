#include<bits/stdc++.h>

using namespace std;

int calc(int x, int y, char a){
	switch(a){
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
	}
}
void handle(){
	string s;
	cin >> s;
	stack <int> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = calc(y, x, s[i]);
			st.push(z);
		}else{
			st.push(s[i] - '0');
		}
	}
	cout << -st.top();
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
