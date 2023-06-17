#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int d,m;
		cin >> d >> m;
		if(m==1){
			if(d<=19) cout << "Ma Ket";
			else cout << "Bao Binh";
		}else if(m == 2){
			if(d<=18){
				cout << "Bao Binh";
			}else{
				cout << "Song Ngu";
			}
		}else if(m == 3){
			if(d<=20){
				cout << "Song Ngu";
			}else{
				cout << "Bach Duong";
			}
		}else if(m == 4){
			if(d<=19){
				cout << "Bach Duong";
			}else{
				cout << "Kim Nguu";
			}
		}else if(m == 5){
			if(d<=20){
				cout << "Kim Nguu";
			}else{
				cout << "Song Tu";
			}
		}else if(m == 6){
			if(d<=20){
				cout << "Song Tu";
			}else{
				cout << "Cu Giai";
			}
		}else if(m == 7){
			if(d<=22){
				cout << "Cu Giai";
			}else{
				cout << "Su Tu";
			}
		}else if(m == 8){
			if(d<=22){
				cout << "Su Tu";
			}else{
				cout << "Xu Nu";
			}
		}else if(m == 9){
			if(d<=22){
				cout << "Xu Nu";
			}else{
				cout << "Thien Binh";
			}
		}else if(m == 10){
			if(d<=22){
				cout << "Thien Binh";
			}else{
				cout << "Thien Yet";
			}
		}else if(m == 11){
			if(d<=22){
				cout << "Thien Yet";
			}else{
				cout << "Nhan Ma";
			}
		}else if(m == 12){
			if(d<=21){
				cout << "Nhan Ma";
			}else{
				cout << "Ma Ket";
			}
		}
		cout << endl;
	}
	return 0;
}
