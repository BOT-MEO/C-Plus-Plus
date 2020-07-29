/* Nhập từ bàn phím giá trị của n sao cho 2≤n≤30
- Tính và in ra tổng
    S = 1/sqrt(1*3) + 1/sqrt(3*5) + ... + 1/sqrt((2n-1)*(2n+1))
*/

#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char** argv){
	int n;
	float s=0;

	cout<<"Nhap n = ";
	cin>>n;
	while(n<2||n>30){
		cout<<"Nhap lai n = ";
		cin>>n;
	}
	for(int i=1;i<=n;i++){
		s = s + 1/sqrt((2*i-1)*(2*i+1));
	}
	cout<<"Gia tri cua bieu thuc S la: "<<s<<endl;
	system("PAUSE");
	return 0;
}