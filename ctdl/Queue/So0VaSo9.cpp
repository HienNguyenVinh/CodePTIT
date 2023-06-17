#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	queue <int> qu;
	qu.push(9);
	int tmp;
	while(1){
		tmp = qu.front();
		qu.pop();
		if(tmp % n == 0){
			cout << tmp;
			break;
		}
		qu.push(tmp * 10);
		qu.push(tmp * 10 + 9);
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
