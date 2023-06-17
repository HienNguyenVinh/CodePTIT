#include<bits/stdc++.h>

using namespace std;

void in(string *step, int *a, int n, int i){
	step[i] = "Buoc " + to_string(i) + ": ";
	for(int k=0; k<=i; ++k){
		step[i] = step[i] + to_string(a[k]) + " ";
	}
}
int main(){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		string step[n];
		for(int i=0; i<n; ++i){
			int x=a[i], pos=i-1;
			while(pos>=0 && x<a[pos]){
				a[pos+1] = a[pos];
				--pos;
			}
			a[pos+1] = x;
			in(step,a,n,i);
		}
		for(int i=n-1; i>=0; --i){
			cout << step[i] << endl;
		}
	return 0;
}
