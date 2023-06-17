#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		set <char> st;
		for(int i=0; i<s.size(); ++i){
			st.insert(s[i]);
		}
		cout << st.size() << endl;
	}
	return 0;
}
