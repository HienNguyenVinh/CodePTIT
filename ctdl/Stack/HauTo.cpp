#include<bits/stdc++.h>

using namespace std;

long long calc(long long x, long long y, string tmp){
	if(tmp == "+"){
		return x+y;
	}else if(tmp == "-"){
		return x - y;
	}else if(tmp == "*"){
		return x * y;
	}else{
		return x / y;
	}
}
long long convertNum(string tmp){
	long long a = 0;
	if(tmp[0] == '-'){
		for(int i=1; i<tmp.size(); ++i){
			a = a * 10 + (tmp[i] - '0');
		}
		return -a;
	}else {
		for(int i=0; i<tmp.size(); ++i){
			a = a * 10 + (tmp[i] - '0');
		}
		return a;	
	}
}
void handle(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	stack <long long> st;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tmp == "*" || tmp == "/" || tmp == "+" || tmp == "-"){
			long long y = st.top();
			st.pop();
			long long x = st.top();
			st.pop();
			long long z = calc(x, y, tmp);
			st.push(z);
		}else{
			st.push(convertNum(tmp));
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
