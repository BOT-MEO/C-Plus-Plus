/* Đề bài: Tính S(n)=1+2+3+...+n 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    int i=1;
    long s=0;
    // Nhập n 
    cout<<"Nhap n = ";
    cin>>n;
    // Kiểm tra điều kiện của n
    while(n<0){
        cout<<"Nhap lai n = ";
        cin>>n;
    }
    // Thuật toán tính toán biểu thức 
    while(i<=n){
        s=s+i;
        i++;
    }
    // In ra kết quả của biểu thức
    cout<<"Tong cua bieu thuc la: "<<s<<endl;
    return 0;
}