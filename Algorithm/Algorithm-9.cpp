/* Đề bài: Nhập số thực x từ bàn phím
- Tính giá trị f(x) theo công thức
f(x) = { 0 nếu x≤0 
         x² nếu 0<x<2
         x + sinπx² nếu x≥2
*/
#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

int main(int argc, char** argv){
	float x;
	float F;
	cout<<"Nhap x = ";
	cin>>x;
	if(x<=0){
		F = 0;
	}
	else if(x>=2){
		F = x + sin(PI)*pow(x,2);
	}
	else if(x<0&&x>=2){
		F = pow(x,2)-x;
	}
	cout<<"Gia tri cua bieu thuc f(x) = "<<F;
    system("PAUSE");
	return 0;
	
}