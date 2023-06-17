#include<bits/stdc++.h>

using namespace std;

void handle(){
	int t;
	cin >> t;
	int x;
	string s;
	stack <int> st;
	while(t--){
		cin >> s;
		if(s == "PUSH"){
			cin >> x;
			st.push(x);
		}else if(s == "POP"){
			if(!st.empty()){
				st.pop();
			}
		}else if(s == "PRINT"){
			if(st.empty()){
				cout << "NONE";
			}else{
				cout << st.top();
			}
			cout << endl;
		}
	}
}
int main(){
	handle();
	return 0;
}
