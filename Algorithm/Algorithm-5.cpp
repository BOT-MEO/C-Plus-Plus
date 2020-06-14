/* Đề bài: Nhập vào một số nguyên n cho đến khi thỏa mãn 50<=n<=100
- Kiểm tra n có phải số chính phương không
- In kết quả ra màn hình
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int i,n;
    cout<<"Nhap n: ";
    cin>>n;
    while (n<50||n>100){
        cout<<"Nhap lai n: ";
        cin>>n;
    }
    i=sqrt(n);
    if(i*i==n){
        cout<<n<<" La so chính phuong";
    }
    else{
        cout<<n<<" Khong la so chinh phuong"
    }
    return 0;
}