#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	queue <string> qu;
	qu.push("6");
	qu.push("8");
	int cnt = 0;
	for(int i=1; i<=n; ++i){
		cnt += pow(2, i);
	}
	cout << cnt << endl;
	while(!qu.empty()){
		string tmp = qu.front();
		qu.pop();
		if(tmp.size() > n){
			break;
		}
		cout << tmp << " ";
		qu.push(tmp + "6");
		qu.push(tmp + "8");
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
