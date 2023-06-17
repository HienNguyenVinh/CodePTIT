#include<bits/stdc++.h>

using namespace std;

void handle(int n, int *a, int &cnt){
	int i=9;
	while(a[i] > n){
		--i;
	}
	while(n >= a[i]){
		n -= a[i];
		++cnt;
	}
	if(n==0){
		cout << cnt << endl;
	}else{
		handle(n, a, cnt);
	}
	
}
int  main(){
	int t;
	cin >> t;
	int a[10] = {1,2,5,10,20,50,100,200,500,1000};
	while(t--){
		int n;
		cin >> n;
		int cnt = 0;	
		handle(n, a, cnt);
	}
	return 0;
}
