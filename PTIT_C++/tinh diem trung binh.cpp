#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	double a[100];
	double min = 10, max = 0;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}
	int cnt = n;
	double s = 0;
	for(int i=0; i<n; ++i){
		if(a[i]==min || a[i]==max){
			a[i] = 0;
			--cnt;
		}
		s+=a[i];
	}
	cout << fixed << setprecision(2) << s/cnt;
	return 0;
}
