#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	int maNv;
	string name,sex,dateOfBirth,address,tax,contractDate;
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin,a.name);
	cin >> a.sex >> a.dateOfBirth;
	cin.ignore();
	getline(cin,a.address);
	cin >> a.tax >> a.contractDate;
}
void inds(NhanVien *ds, int n){
	for(int i=0; i<n; ++i){
		int m = i+1;
		if(m<10){
			cout << "0000" << m;
		}else{
			cout << "000" << m;
		}
		cout << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].dateOfBirth << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].contractDate << endl;
	}
	
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
