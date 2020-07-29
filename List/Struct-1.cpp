/* Đề bài: Viết các chương trình C++ thực hiện công việc sau: 
- Xây dựng cấu trúc (struct) lưu thông tin sinh viên bao gồm: Tên sinh viên; Điểm thi.
- Thực hiện nhập vào N số nguyên từ bàn phím cho tới khi thỏa mãn 2<N<40.
- Nhập vào và hiển thị thông tin về N sinh viên ?
*/
#include <iostream>

using namespace std;

struct sinhvien{
	char ten;
	int diem;
};
sinhvien sv[50];

void nhap_ds(sinhvien sv[],int n){
	for(int i=1;i<=n;i++){
		cout<<"Nhap ten sinh vien thu "<<i<<":";
		fflush(stdin);
		cin>>sv[i].ten;
		cout<<"Nhap diem thi: ";
		fflush(stdin);
		cin>>sv[i].diem;
		while(sv[i].diem<0||sv[i].diem>10){
			cout<<"Nhap lai diem thi: ";
			cin>>sv[i].diem;
		}
	}
}

void hien_thi(sinhvien sv[],int n){
	cout<<"_____________________________________"<<endl;
	cout<<"*** Danh sach thong tin sinh vien ***"<<endl;
	for(int i=1;i<=n;i++){
		cout<<"Ten sinh vien: "<<sv[i].ten<<endl;
		cout<<"Diem thi: "<<sv[i].diem<<endl;
	}
}

int main(int argc, char** argv){
	int n;
	cout<<"Nhap so luong sinh vien n = ";
	cin>>n;
	while(n<=2||n>=40){
		cout<<"Nhap lai n = ";
		cin>>n;
	}
	nhap_ds(sv,n);
	hien_thi(sv,n);
	return 0;
}