#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	queue <string> qu;
	string s;
	qu.push("1");
	while(n--){
		s = qu.front();
		qu.pop();
		cout << s << " ";
		qu.push(s + "0");
		qu.push(s + "1");
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
