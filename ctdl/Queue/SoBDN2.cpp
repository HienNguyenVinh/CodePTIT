#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	queue <long long> qu;
	qu.push(1);
	while(!qu.empty()){
		long long tmp = qu.front();
		qu.pop();
		if(tmp * 10 % n == 0){
			cout << tmp * 10;
			break;
		}
		qu.push(tmp*10);
		if((tmp * 10 + 1) % n == 0){
			cout << tmp*10 + 1;
			break;
		}
		qu.push(tmp*10 + 1);
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
