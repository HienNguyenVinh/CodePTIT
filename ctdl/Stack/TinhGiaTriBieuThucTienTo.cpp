#include<bits/stdc++.h>

using namespace std;

int calc(int a, int b, char c){
	switch(c){
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}
}
void handle(){
	string s;
	cin >> s;
	stack <int> st;
	for(int i=s.size()-1; i>=0; --i){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = calc(x, y, s[i]);
			st.push(z);
		}else{
			st.push(s[i] - '0');
		}
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
