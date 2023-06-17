#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int sum = 0;
		int res = 0;
		for(int i=0; i<=a.length(); ++i){
			if(a[i]>='0' && a[i]<='9'){
				res = 10*res + int(a[i]-'0');
			}else{
				sum+=res;
				res = 0;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
