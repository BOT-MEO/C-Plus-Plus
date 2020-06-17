/* Đề bài: 
- Nhập vào số thực x
- Tính và in ra giá trị hàm 
 f(x) = sqrt(pow(x,2)+1) với x>=1 
        3x+5 với -1<x<1
        pow(x,2)+2*x-5 với x<=-1
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x,F;
    cout<<"Nhap x = ";
    cin>>x;
    if(x>=1){
        F=sqrt(pow(x,2)+1);
    }
    else if(x<=-1){
        F=pow(x,2)+2*x+5;
    }
    else if(x>-1&&x<1){
        F=3*x+5;
    }
    cout<<"Gia tri cua bieu thuc f(x) la: "<<F<<endl;    
    return 0;
}
