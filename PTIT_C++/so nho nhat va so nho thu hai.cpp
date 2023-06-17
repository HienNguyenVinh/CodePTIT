#include<bits/stdc++.h>

using namespace std;

int isExist(int *b, int cnt, int x){
	for(int i=0; i<cnt; ++i){
		if(b[i] == x){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		int cnt = 0;
		for(int &x:a){
			cin >> x;
			if(isExist(b,cnt,x)){
				b[cnt++] = x;
			}
		}
		sort(b,b+cnt);
		if(cnt == 1){
			cout << -1;
		}else{
			cout << b[0] << " " << b[1];
		}
		cout << endl;
	}
	return 0;
}
