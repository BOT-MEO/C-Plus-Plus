/* Đề bài: Nhập số nguyên dương n thỏa mãn 90<=n<=200
- Tìm xem có bao nhiêu số chia hết cho 3 hoặc 7 trong đoạn [1,n)
- Có bao nhiêu số chia hết cho cả 3 và 7 nằm trong đoạn đó
- In kết quả lên màn hình
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
	int demtong=0,dem3=0,dem7=0;
	cout<<"Nhap n: ";
	cin>>n;
	while(n<90||n>200){
		cout<<"Nhap lai n: ";
		cin>>n;
	}
	for(int i=1;i<=n;i++){
		if(i%3==0){
			dem3 = dem3 + 1; 
		}
		if(i%7==0){
			dem7 = dem7 + 1; 
		}
		if(i%3==0&&i%7==0){
			demtong = demtong + 1;
		}
	}
	demtong = dem3+dem7;
	cout<<"So cac so chia het cho 3 la:"<<" "<<dem3<<endl;
	cout<<"So cac so chia het cho 7 la:"<<" "<<dem7<<endl;
	cout<<"So cac so chia het cho ca 3 va 7 la:"<<" "<<demtong<<endl;
    return 0;
}