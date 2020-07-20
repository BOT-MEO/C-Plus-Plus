/* Nhập vào ma trận có kích thước m x n. 
- Hiển thị ma trận vừa nhập ra màn hình dưới dạng bảng.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

void NhapMaTran(int a[50][50],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"a "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>a[i][j];
        }
    }
}
void XuatMaTran(int a[50][50],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
    }
}
int main(){
    int a[50][50];
    int m,n;
    cout<<"Nhap so hang m: ";
    cin>>m;
    cout<<"Nhap so cot n: ";
    cin>>n;
    NhapMaTran(a,m,n);
    XuatMaTran(a,m,n);
    return 0;
}