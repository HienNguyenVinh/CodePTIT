#include<bits/stdc++.h>

using namespace std;

void in(string *step, int *a, int n, int i){
	step[i] = "Buoc " + to_string(i+1) + ": ";
	for(int k=0; k<n; ++k){
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
		for(int i=0; i<n-1; ++i){
			int min = i;
			for(int j=i+1; j<n; ++j){
				if(a[min]>a[j]){
					min = j;
				}
			}
			if(i != min){
				swap(a[i],a[min]);
				
			}
			in(step,a,n,i);
		}
		for(int i=n-1; i>=0; --i){
			cout << step[i] << endl;
		}
	return 0;
}
