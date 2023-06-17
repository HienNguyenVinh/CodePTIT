#include<bits/stdc++.h>

using namespace std;

void min(int m, int s){
	int a[m];
	--s;
	for(int i=m-1; i>0; --i){
		if(s>9){
			a[i] = 9;
			s-=9;
		}else{
			a[i] = s;
			s = 0;
		}
	}
	a[0] = s+1;
	for(int i:a){
		cout << i;
	}
}
void max(int m, int s){
	int a[m];
	for(int i=0; i<m; ++i){
		if(s>9){
			a[i] = 9;
			s-=9;
		}else{
			a[i] = s;
			s = 0;
		}
	}
	for(int i:a){
		cout << i;
	}
}
int main(){
	int m,k;
	cin >>m >>k;
	if(k>m*9 || k==0 && m>1){
		cout << "-1 -1";
	}else{
		min(m,k);
		cout << " ";
		max(m,k);
	}
	
	return 0;
}
