#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	queue <string> qu;
	stack <string> st;
	qu.push("6");
	qu.push("8");
	while(!qu.empty()){
		string tmp = qu.front();
		qu.pop();
		st.push(tmp);
		if(qu.front().size() > n){
			break;
		}
		qu.push(tmp + "6");
		qu.push(tmp + "8");
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
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
