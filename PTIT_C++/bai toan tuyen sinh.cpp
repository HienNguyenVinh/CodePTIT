#include<bits/stdc++.h>

using namespace std;

struct sv{
	string ma, ten, trangThai;
	float toan,ly,hoa,uuTien,tongDiem; 
};
int main(){
	sv a;
	cin >> a.ma;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.toan >> a.ly >> a.hoa;
	
	if(a.ma[2] == '1'){
		a.uuTien = 0.5;
	}else if(a.ma[2] == '2'){
		a.uuTien = 1;
	}else{
		a.uuTien = 2.5;
	}
	a.tongDiem = a.toan*2+a.hoa+a.ly;
	if(a.tongDiem+a.uuTien >= 24){
		a.trangThai = "TRUNG TUYEN";
	}else{
		a.trangThai = "TRUOT";
	}
	
	cout << a.ma << " " << a.ten << " " << a.uuTien << " " << a.tongDiem << " " << a.trangThai;
	return 0;
}
