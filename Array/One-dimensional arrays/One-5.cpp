/* Đề bài: Nhập vào một dãy số gồm n phần tử với 5<=n<=100
- Kiểm tra xem trong dãy số có giá trị k không (với k nhập từ bàn phím)
- In kết quả lên màn hình
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
	int k;
	int a[100];
	cout<<"Nhap k: ";
	cin>>k;
	cout<<"Nhap n: ";
	cin>>n;
	while(n<5||n>=100){
		cout<<"Nhap lai n: ";
		cin>>n;
	}
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu thu "<<i<<" :";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i=k){
			cout<<"Trong day so co ton tai phan tu k";
		}
		else{ 
			cout<<"Trong day so khong ton tai phan tu k";	
		} 
	}
    return 0;
}