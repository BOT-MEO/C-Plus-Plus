/* Tính tiền taxi: 
- Với 1km đầu tiên giá cước là 10000 đồng
- Từ km thứ 2 đến km thứ 30 giá cước là 11000 đồng
- Từ 31 km trở lên giá cước là 9000 đồng
*/
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv){
	float tiencuoc,km;
	cout<<"Nhap so km da di = ";
	cin>>km;
	if(0<km&&km<=1){
		tiencuoc = 10000;
	}
	else if(1<km&&km<=30){
		tiencuoc = 10000 + 11000*km;
	}
	else if(km>=31){
		tiencuoc = 10000 + 11000*km + 9000*km;
	}
	cout<<"So tien khach hang phai thanh toan la: "<<tiencuoc<<endl;
	system("PAUSE");
	return 0;
}