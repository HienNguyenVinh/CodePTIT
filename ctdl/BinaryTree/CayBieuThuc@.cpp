#include<bits/stdc++.h>

using namespace std;

int n;
string s;

long long calc(long long x, long long y, string tmp){
	if(tmp == "+"){
		return x + y;
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
	cin >> n;
	cin.ignore();
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	stack <string> st;
	while(ss >> tmp){
		st.push(tmp);
	}
	
	queue <long long> qu;
	while(!st.empty()){
		tmp = st.top();
		
		st.pop();
		if(tmp == "+" or tmp == "-" or tmp == "*" or tmp == "/"){
			long long x = qu.front();
			qu.pop();
			long long y = qu.front();
			qu.pop();
			long long ans = calc(y, x, tmp);
			qu.push(ans);
		}else{
			qu.push(convertNum(tmp));
		}
	}
	cout << qu.front();
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
