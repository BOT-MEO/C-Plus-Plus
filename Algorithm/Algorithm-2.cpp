/*
- Nhập vào số nguyên n cho đến khi thỏa mãn 1≤n≤100
- Tính và in ra tổng: S = sqrt(1^3+2^3+3^3+...+n^3)/n
*/

#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    float s=0,t=0;
    cout<<"Nhap n = ";
    cin>>n;
    while (n<1||n>100){
        cout<<"Nhap lai n = ";
        cin>>n;
    }
    for(int i=1;i<=n;i++){
        t = t+pow(i,3);
    }
    s=sqrt(t)/n;
    cout<<"Gia tri cua bieu thuc S = "<<s<<endl;
    return 0;
}