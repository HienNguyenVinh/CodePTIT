#include<bits/stdc++.h>

using namespace std;

void handle(){
	string s;
	getline(cin, s);
	stack <char> st;
	vector <int> a;
	int cntL = 0, cntR = 0;
	for(int i=0; i<s.length(); ++i){
		if(s[i] == '('){
			st.push(s[i]);
			++cntL;
			cntR = 0;
			a.push_back(cntL);
		}else if(s[i] == ')'){
			st.pop();
			++cntR;
			a.push_back(cntL - cntR + 1);
		}
	}
	for(int i:a){
		cout << i << " ";
	}
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
