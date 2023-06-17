#include<bits/stdc++.h>

using namespace std;

void testD(int *a, string *d, int &cntD, int n, int i){
	for(int j=0; j<=2; j+=2){
		a[i] = j;
		if(i == 1){
			if(a[0] != 0 || a[1] != 0){
				d[cntD] = to_string(a[0]) + to_string(a[1]);
				++cntD;
			}
		}else{
			testD(a,d,cntD,n,i+1);
		}
	}
}
void testY(int *a, string *y, int &cntY, int n, int i){
	for(int j=0; j<=2; j+=2){
		a[i] = j;
		if(i == 2){
			y[cntY] = to_string(a[0]) + to_string(a[1]) + to_string(a[2]);
			++cntY;
		}else{
			testY(a,y,cntY,n,i+1);
		}
	}
}
int main(){
	string d[5], m, y[10];
	m = "/02/2";
	int a[10];
	int cntD = 0, cntY = 0;
	testD(a,d,cntD,2,0);
	testY(a,y,cntY,3,0);
	for(int i=0; i<cntD; ++i){
		for(int j=0; j<cntY; ++j){
			cout << d[i] << m << y[j] << endl;
		}
	}
	return 0;
	
}
