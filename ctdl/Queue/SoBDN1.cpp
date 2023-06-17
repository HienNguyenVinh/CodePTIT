#include<bits/stdc++.h>

using namespace std;

void handle(){
	string n;
	cin >> n;
	queue <string> qu;
	qu.push("1");
	int cnt = 0;
	while(!qu.empty()){
		string tmp = qu.front();
		qu.pop();
		++cnt;
		string x = tmp + "0";
		if(x.size() > n.size() || (x.size() == n.size() && x > n)){
			break;
		}
		qu.push(x);
		x = tmp + "1";
		if(x.size() > n.size() || (x.size() == n.size() && x > n)){
			break;
		}
		qu.push(x);
	}
	cout << cnt + qu.size();
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
