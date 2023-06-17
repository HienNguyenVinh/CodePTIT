#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	cin >> s;
	stack <int> st;
	st.push(-1);
	int n = s.size();
	int res = 0;
	for(int i=0; i<n; ++i){
		if(s[i] == '('){
			st.push(i);
		}else{
			st.pop();
			if(st.size() > 0){
				res = max(res, i - st.top());
			}else{
				st.push(i);
			}
		}
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
