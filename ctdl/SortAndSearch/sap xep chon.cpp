#include<bits/stdc++.h>

using namespace std;

void in(int *a, int n, int i){
	cout << "Buoc " << i+1 << ": ";
	for(int i=0; i<n; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	int min;
	for(int i=0; i<n-1; ++i){
		min = i;
		for(int j=i+1; j<n; ++j){
			if(a[j] < a[min]){
				min = j;
			}
		}
		if(i != min){
			swap(a[i],a[min]);
		}
		in(a,n,i);
	}
	return 0;
}
