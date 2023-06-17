#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string maSv;
	string name, clas, dateOfBirth;
	float gpa;
};
void nhap(SinhVien &a){
	a.maSv = "B20DCCN001";
	getline(cin,a.name);
	cin >> a.clas;
	cin >> a.dateOfBirth;
	cin >> a.gpa;
}
void in(SinhVien a){
	cout << a.maSv << "\t" << a.name << "\t" << a.clas << "\t";
	stringstream ss(a.dateOfBirth);
	string tmp,n[3];
	int i = 0;
	while(getline(ss,tmp,'/')){
		n[i] = tmp;
		++i;
	}
	for(int i=0; i<3; ++i){
		if(n[i].length() < 2){
			cout << "0" << n[i] << "/";
		}else if(n[i].length() != 4){
			cout << n[i] << "/";
		}else{
			cout << n[i];
		}
	}
	cout << "\t" << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
