/* Nhập vào một dãy n số nguyên, với n nhập vào từ bàn phím và n thỏa mãn 7<=n<=60
- Sắp xếp dãy theo chiều giảm dần và in ra kết quả
- Sắp xếp dãy theo chiều tăng dần và in ra kết quả 
*/
#include <iostream>

using namespace std;

void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"Nhap vao phan tu thu "<<i<<" : ";
        cin>>a[i];
    }
}

void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}

void tangdan(int a[],int n){
    int trunggian=0;
    cout<<"Sap xep theo chieu tang dan la: "<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                trunggian=a[i];
                a[i]=a[j];
                a[j]=trunggian;
            }
        }
    }
}

void giamdan(int a[],int n){
    int trunggian=0;
    cout<<"Sap xep theo chieu giam dan la: "<<endl; 
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                trunggian=a[i];
                a[i] = a[j];
                a[j] = trunggian;        
            }
        }
    }
}

int main(){
    int n;
    int a[65];
    cout<<"Nhap n = ";
    cin>>n;
    while(n<7||n>60){
        cout<<"Nhap lai n = ";
        cin>>n;
    }
    nhap(a,n);
    cout<<""<<endl;
    tangdan(a,n);
    xuat(a,n);
    cout<<""<<endl;
    giamdan(a,n);
    xuat(a,n);
    return 0;
}