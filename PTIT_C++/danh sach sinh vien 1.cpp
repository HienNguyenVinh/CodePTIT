#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ten,lop,ngaySinh;
	float gpa;
};
string fix(string s){
	s[0] = toupper(s[0]);
	for(int i=1; i<s.size(); ++i){
		s[i] = tolower(s[i]);
	}
	return s;
}
string chuanHoa(string name){
	string s;
	stringstream ss(name);
	string tmp;
	int cnt = 0;
	while(ss >> tmp){
		s += fix(tmp);
		s+=" ";
	}
	return s;
}
void nhap(SinhVien *ds, int n){
	for(int i=0; i<n; ++i){
		cin.ignore();	
		getline(cin,ds[i].ten);
		cin >> ds[i].lop >> ds[i].ngaySinh >> ds[i].gpa;
	}
}
void in(SinhVien *ds, int n){
	for(int i=0; i<n; ++i){
		cout << "B20DCCN";
		int maSv[3];
		int k=2,m=i+1;
		while(k>=0){
			maSv[k] = m%10;
			m/=10;
			--k;
		}
		for(int j=0; j<3; ++j){
			cout << maSv[j];
		}
		cout << " " << chuanHoa(ds[i].ten) << ds[i].lop << " ";
		stringstream ss(ds[i].ngaySinh);
		string tmp;
		string a[3];
		int cnt = 0;
		while(getline(ss,tmp,'/')){
			a[cnt++] = tmp;
		}
		if(a[0].size() == 1){
			cout << "0" << a[0] << "/";
		}else{
			cout << a[0] << "/";
		}
		if(a[1].size() == 1){
			cout << "0" << a[1] << "/";
		}else{
			cout << a[1] << "/";
		}
		cout << a[2] << " ";
		cout << fixed << setprecision(2) << ds[i].gpa;
		cout << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
