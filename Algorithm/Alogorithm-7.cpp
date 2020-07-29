/* Tính tiền lương và thưởng của một nhân viên theo công thức sau:
    Lương = Tiền lương * Số ngày công
    Thưởng = Lương * Hệ số
- Hệ số được tính như sau:
    + Nếu 26≤Số ngày công≤31 thì hệ số bằng 2.0
    + Nếu 24≤Số ngày công≤26 thì hệ số bằng 1.45
    + Còn lại số ngày công ≤23 thì hệ số bằng 1.13
- Hãy nhập tiền công (là số lương của một ngày làm việc) và số ngày công từ bàn phím
*/

#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char** argv){
	int tiencong,luong,thuong,n,s;
	cout<<"Nhap so ngay cong: ";
	cin>>n;
	while(n<0||n>31){
		cout<<"Nhap lai so ngay cong: ";
		cin>>n;
	}
	cout<<"Nhap so tien cong: ";
	cin>>tiencong;
	if(n<=23){
		luong=tiencong*n;
		thuong=luong*1.13;
	}
	else if(24<=n&&n<26){
		luong=tiencong*n;
		thuong=luong*1.45;
	}
	else if(26<=n&&n<=31){
		luong=tiencong*n;
		thuong=luong*2;
	}
	s=luong+thuong;
	cout<<"So tien thuong la: "<<thuong<<endl;
	cout<<"So tien luong la: "<<luong<<endl;
	cout<<"Tong so tien nhan duoc la: "<<s<<endl;
	system("PAUSE");
	return 0;
}