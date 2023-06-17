#include<bits/stdc++.h>

using namespace std;

long long min(string a, string b){
	for(char &x:a){
		if(x == '6'){
			x = '5';
		}
	}
	for(char &x:b){
		if(x == '6'){
			x = '5';
		}
	}
	return stoll(a)+stoll(b);
}
long long max(string a, string b){
	for(char &x:a){
		if(x == '5'){
			x = '6';
		}
	}
	for(char &x:b){
		if(x == '5'){
			x = '6';
		}
	}
	return stoll(a)+stoll(b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << min(a,b) << " " << max(a,b) << endl;
	}
	return 0;
}
