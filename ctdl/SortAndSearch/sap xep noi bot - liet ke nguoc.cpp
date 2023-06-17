#include<bits/stdc++.h>

using namespace std;

void in(string *step, int *a, int n, int i){
	step[i] = "Buoc " + to_string(i+1) + ": ";
	for(int k=0; k<n; ++k){
		step[i] = step[i] + to_string(a[k]) + " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		string step[n];
		bool haveSwap;
		int cnt = 0;
		for(int i=0; i<n-1; ++i){
			haveSwap = false;
			for(int j=0; j<n-i-1; ++j){
				if(a[j]>a[j+1]){
					swap(a[j+1],a[j]);
					haveSwap = true;
				}
			}
			if(!haveSwap){
				break;
			}
			in(step,a,n,cnt);
			++cnt;
		}
		for(int i=cnt-1; i>=0; --i){
			cout << step[i] << endl;
		}
	}
	return 0;
}
