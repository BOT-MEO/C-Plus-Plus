/* Đề bài: Nhập vào một số nguyên N thỏa mãn điều kiện 5 <= n <= 50 
- Nhập vào một dãy số Un gồm N phần tử 
- In ra dãy số vừa nhập
- In ra màn hình các số chẵn và tính tổng các số chẵn 
*/


#include <iostream>

using namespace std;

int main(){
    int n;
    int a[50];
    int s;
    // Nhập n
    cout<<"Nhap vao so phan tu cua day n = ";
    cin>>n;
    // Kiểm tra điều kiện của n
    while(n<5||n>50){
        cout<<"Nhap lai n = ";
        cin>>n;
    }
    // Khai báo các phần tử trong mảng
    for(int i=0;i<n;i++){
        cout<<"Nhap vao phan tu thu "<<i<<" : ";
        cin>>a[i];
    }
    // In ra các phần tử trong mảng
    cout<<"Day so vua nhap la: "<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<a[i]<<endl;
    }
    //  In ra các số chẵn trong mảng và tính tổng của các số chẵn
    cout<<"Cac so chan la: "<<endl;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<" "<<a[i]<<endl;
            s=s+a[i];
        }
    }
    // In ra tổng của các số chẵn
    cout<<"Tong cua cac so chan la: "<<s<<endl;
    return 0;
}