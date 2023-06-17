#include <bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	getline(cin, s);
	stack <char> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i] != ')'){
			st.push(s[i]);
		}else{
			bool check = true;
			while(!st.empty()){
				char a = st.top();
				st.pop();
				if(a == '+' || a == '-' || a == '*' || a == '/'){
					check = false;
				}
				if(a == '('){
					break;
				}
			}
			if(check){
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
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
//3
//((a+b))
//(a + (b)/c)
//(a + b*(c-d))
