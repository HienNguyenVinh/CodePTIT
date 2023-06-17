#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		if(x < 450){
			cout << -1;
		}else if(x < 525){
			cout << 7;
		}else if(x < 600){
			cout << 8;
		}else if(x < 730){
			cout << 9;
		}else {
			cout << 10;
		}
		cout << endl;
	}
	return 0;
}
