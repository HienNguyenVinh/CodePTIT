#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	queue <string> qu;
	qu.push("2");
	qu.push("3");
	qu.push("5");
	qu.push("7");
	while(!qu.empty()){
		string tmp = qu.front();
		qu.pop();
		if(tmp.size() > 3){
			if(tmp.size() <= n){
				cout << tmp << endl;
				qu.push(tmp + "2");
				qu.push(tmp + "3");
				qu.push(tmp + "5");
				qu.push(tmp + "7");
			}else{
				return;
			}
		}
	}
}
int main(){
	handle();
	return 0;
}
