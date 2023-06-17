#include<bits/stdc++.h>

using namespace std;

int calc(int x, int y, char tmp){
	if(tmp == '+'){
		return x + y;
	}else if(tmp == '-'){
		return x - y;
	}else if(tmp == '*'){
		return x * y;
	}
	return x / y;		
}
void handle(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	stack <int> st;
	for(int i=0; i<s.size(); ++i){
		char tmp = s[i];
		if(tmp != ' '){
			if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/'){
				int y = st.top(); st.pop();
				int x = st.top(); st.pop();
				int z = calc(x, y, tmp);
				st.push(z);
			}
			st.push(tmp - '0');
		}
	}
	cout << st.top();
}
int main(){
	int t;
	cin >> t;
//	cin.ignore();
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
