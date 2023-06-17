#include<bits/stdc++.h>

using namespace std;

void tach(int a, int *cnt){
	while(a>0){
		++cnt[a%10];
		a/=10; 
	}
}
void handle(){
	int cnt[10] = {};
	int a, b;
	cin >> a >> b;
	for(int i=a; i<=b; ++i){
		tach(i, cnt);
	}
	for(int i=0; i<=9; ++i){
		cout << cnt[i] << " ";
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
