#include<bits/stdc++.h>

using namespace std;
int isExist(int x, int *nums, int cnt){
	for(int i=0; i<cnt; ++i){
		if(x == nums[i]){
			return 0;
		}
	}
	return 1;
}
void tachCs(string n, int *nums, int &cnt){
	int length = n.length();
	for(int i=0; i<length; ++i){
		int num = n[i]-'0';
		if(isExist(num,nums,cnt)){
			nums[cnt++] = num;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		string a[n];
		cin.ignore();
		int nums[10],cnt = 0;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			tachCs(a[i],nums,cnt);
		}
		sort(nums,nums+cnt);
		for(int i=0; i<cnt; ++i){
			cout << nums[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
