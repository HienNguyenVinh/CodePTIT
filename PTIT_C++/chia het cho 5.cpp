#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		int r;
		for(int i=0; i<n.size(); ++i){
			if(n[i] == '1'){
				r = (2*r+1)%5;
			}else{
				r = (2*r)%5;
			}
		}
		if(r == 0){
			cout << "Yes";
		}else{
			cout << "No";
		}
		cout << endl;
	}
	return 0;
}

//#include<iostream> 
//#include<cstring> 
//using namespace std; 
//string s; 
//int t,i,temp,temp2; 
//void process(){ 
//	temp2=0; 
//	cin>>s; 
//	for(i=0;i<s.size();i++){ 
//		if(s[i]=='1'){ 
//			if(i%4==0) temp2+=1; 
//			else if(i%4==1) temp2+=2; 
//			else if(i%4==2) temp2+=4; 
//			else if(i%4==3) temp2+=3; 
//		} 
//	} 
//	if(temp2%5==0&&temp2!=0) cout<<"Yes"; 
//		else cout<<"No"; 
//	cout<<endl; 
//} 
//main(){ 
//	cin>>t; 
//	while(t--){ 
//		process(); 
//	} return 0; 
//}
