#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string nums[n];
	string newNum[n];
	cin.ignore();
	for(int i=0; i<n; ++i){
		getline(cin,nums[i]);
		int size = nums[i].length();
		for(int j=0; j<size; ++j){
			if(nums[i][j] >='0' && nums[i][j] <='9'){
				newNum[i] += nums[i][j];
			}
		}
	}
	for(int i=0; i<n; ++i){
		if(newNum[i][0] != '0'){
			cout << "0";
			for(int j=2; j<newNum[i].length(); ++j){
				cout << newNum[i][j];
			}
			cout << endl;
		}else{
			cout << newNum[i] << endl;
		}
	}
	return 0;
}
