#include<bits/stdc++.h>

using namespace std;

void xoa(int *a, int &n, int x){
	for(int i=x; i<n-2; ++i){
		a[i] = a[i+2];
	}
	n-=2;
}
void thuGon(int *a, int &n){
	int check = 0;
	for(int i=0; i<n-1; ++i){
		int s= a[i]+a[i+1];
		if(s % 2 == 0){
			xoa(a,n,i);
			check = 1;
			break;
		}
	}
	if(check){
		thuGon(a,n);
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	thuGon(a,n);
	cout << n;
	return 0;
}
