#include<bits/stdc++.h>

using namespace std;

int main(){
	int t ; 
	cin>>t ; 
	while(t--){ 
		int n ; 
		cin>>n ; 
		int arr[n]; 
		int res ; 
		int temp = 100000000; 
		for(int i = 0 ; i<n ; i++){ 
			cin>>arr[i]; 
		} 
		for(int i =0 ; i<n ;i++){ 
			for(int j = i+1 ; j<n ; j++){ 
				if(abs(arr[i]+arr[j])< temp){ 
					temp = abs(arr[i]+arr[j]); 
					res = arr[i]+arr[j]; 
				} 
			} 
		} 
		cout<<res<<endl; 
	} 
	return 0 ; 
}
