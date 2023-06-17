#include<bits/stdc++.h>

using namespace std;

int a[9][9];

void test(int *col, int *d1, int *d2, int i, int &sum){
	for(int j=1; j<=8; ++j){
		if(col[j] == 1 && d1[i-j+8] == 1 && d2[i+j-1] == 1){
			col[j] = d1[i-j+8] = d2[i+j-1] = 0;
			if(i == 8){
				int tmp = 0;
				for(int i=1; i<=8; ++i){
					for(int j=1; j<=8; ++j){
						if(col[j] == 0 && d1[i-j+8] == 0 && d2[i+j-1] == 0){
							tmp += a[i][j];
							break;
						}
					}
				}
				sum = max(sum, tmp);
			}else{
				test(col, d1, d2, i+1, sum);
			}
			
			col[j] = d1[i-j+8] = d2[i+j-1] = 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	for(int k=1; k<=t; ++k){
		for(int i=1; i<=8; ++i){
			for(int j=1; j<=8; ++j){
				cin >> a[i][j];
			}
		}
		int col[20], d1[20], d2[20];
		for(int i=0; i<20; ++i){
			col[i] = d1[i] = d2[i] = 1;
		}
		int sum = 0;
		int tmp = 0;
		test(col, d1, d2, 1, sum);
		cout << "Test " << k << ": " << sum << endl;
	}
	return 0;
}
