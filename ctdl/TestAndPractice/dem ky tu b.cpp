#include<bits/stdc++.h>

using namespace std;

int check(string s, int k){
	int cnt = 0;
	for(int i=0; i<k; ++i){
		if(s[i] == 'B'){
			++cnt;
		}
	}
	return cnt;
}
void test(int n, int k){
	if(n == 0){
		cout << 0 << endl;
	}else if (n==1){
		cout << 1 << endl;
	}else{
		string s[n+1];
		s[0] = "A";
		s[1] = "B";
		for(int i=2; i<=n; ++i){
			s[i] = "";
			s[i] = s[i-1] + s[i-2];
		}
		int cnt = check(s[n], k);
		cout << cnt << endl;	
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		test(n, k);
	}
	return 0;
}
