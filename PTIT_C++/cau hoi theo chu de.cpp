#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n;
	string a[2*n];
	cin.ignore();
	for(int i=0; i<n; ++i){
		
		getline(cin,a[i]);
	}
	int str[n];
	int cnt[n],tmp=0;
	for(int i=0; i<n; ++i){
		if(a[i] != ""){
			cnt[tmp]++;
		}else{
			++tmp;
			str[tmp] = i;
		}
	}
	cout << a[0] << ": " << cnt[0] << endl;
	for(int i=1; i<=tmp; ++i){
		cout << a[str[i]+1] << ": " << cnt[i]-1 << endl;
	}
	return 0;
}
