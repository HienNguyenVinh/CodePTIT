#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string name;
	string dateOfBirth;
	float score1;
	float score2;
	float score3;
	float totalScore;
};
void nhap(ThiSinh &stu1){
	getline(cin,stu1.name);
	cin >> stu1.dateOfBirth;
	cin >> stu1.score1 >> stu1.score2 >> stu1.score3;
}
void in(ThiSinh stu1){
	stu1.totalScore = stu1.score1 + stu1.score2 + stu1.score3;
	cout << stu1.name << " " << stu1.dateOfBirth << " ";
	cout << fixed << setprecision(1) << stu1.totalScore; 
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
