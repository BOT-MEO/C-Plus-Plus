/* Đề bài: Tính S(n)=1+2+3+...+n 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    int i=1;
    long s=0;
    cout<<"Nhap n = ";
    cin>>n;
    while(n<0){
        cout<<"Nhap lai n = ";
        cin>>n;
    }

    while(i<=n){
        s=s+i;
        i++;
    }
    cout<<"Tong cua bieu thuc la: "<<s<<endl;
    return 0;
}