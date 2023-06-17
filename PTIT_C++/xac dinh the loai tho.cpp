#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string a[n];
	int cnt[n];
	cin.ignore();
	for(int i=0; i<n; ++i){
		getline(cin,a[i]);
		stringstream ss(a[i]);
		string tmp;
		int dem = 0;
		while(ss >> tmp){
			dem++;
		}
		cnt[i] = dem;
	}
	int k;
	int poem = 0;
	int tho[n];
	if(cnt[0] == 6){
		tho[0] = 1;
		poem++;
		k = 2;
	}else{
		tho[0] = 2;
		poem++;
		k= 4;
	}
	while(k<n){
		if(cnt[k] == 6){
			k+=2;
			if(cnt[k] == 7){
				tho[poem++] = 1;
			}
		}
		if(cnt[k] == 7){
			tho[poem++] = 2;
			k+=4;
		}
	}
	cout << poem << endl;
	for(int i=0; i<poem; ++i){
		cout << tho[i] << endl;
	}
	return 0;
}
