/* Nhập vào dãy số nguyên gồm n phần tử (5≤n≤30)
- Tìm phần tử lớn nhất trong dãy
- Tìm phần tử nhỏ nhất trong dãy
*/

#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char** argv){
	int n;
	int a[30];
	int max=0,min=0;
	cout<<"Nhap n: ";
	cin>>n;
	while(n<5||n>30){
		cout<<"Nhap lai n: ";
		cin>>n;
	}
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu thu "<<i<<" :";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	cout<<"Phan tu lon nhat trong day la: "<<max<<endl;
	cout<<"Phan tu nho nhat trong day la: "<<min<<endl;
	system("PAUSE");
	return 0;
}