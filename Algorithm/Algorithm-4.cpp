/* Đề bài: 
- Nhập vào số nguyên n cho đến khi thỏa mãn 5<=n<=100
- Tính và in ra tổng S = sqrt(pow(1,2)+pow(2,2)+pow(3,2)+...+pow(n,2))  
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    float S=0;
    cout<<"Nhap n = ";
    cin>>n;
    while(n<5||n>100){
        cout<<"Nhap lai n = ";
        cin>>n;
    }
    while(i<=n){
        S=S+sqrt(pow(i,2));
        i++;
    }
    cout<<"Gia tri bieu thuc S = "<<S<<endl;
    return 0;
}