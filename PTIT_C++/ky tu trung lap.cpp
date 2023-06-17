#include<bits/stdc++.h>

using namespace std;

int check(char x, char *b, int n){
	for(int i=0; i<n; ++i){
		if(b[i] == x){
			return i;
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		char b[10000];
		int cnt[10000],dem = 0;
		
		for(int i=0; i<s.size(); ++i){
			int x = check(s[i],b,dem);
			if(x == -1){
				
				b[dem] = s[i];
				cnt[dem] = 1;
				++dem;
			}else{
				cnt[x]++;
			}
		}
		for(int i=0; i<dem; ++i){
			if(cnt[i] == 1){
				cout << b[i];
			}
		}
		cout << endl;
	}
	return 0;
}
