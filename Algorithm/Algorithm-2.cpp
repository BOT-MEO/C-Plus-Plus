/* Đề bài: Nhập vào từ bàn phím ba điểm A, B, C. 
- Tính độ dài các đoạn thẳng AB, BC, CA.
- 
*/

#include <iostream>
#include <math.h>

int main(){
    float x1,x2,x3,y1,y2,y3;
    int AB,BC,AC;
    // Nhập tọa độ các điểm A, B, C
    cout<<"Nhap toa do diem A "<<endl;
    cout<<"Hoanh do diem A la X = ";cin>>x1;
    cout<<"Tung do diem A la y = ";cin>>y1;
    cout<<"Nhap toa do diem B "<<endl;
    cout<<"Hoanh do diem B la X = ";cin>>x2;
    cout<<"Tung do diem B la y = ";cin>>y2;
    cout<<"Nhap toa do diem C "<<endl;
    cout<<"Hoanh do diem C la X = ";cin>>x3;
    cout<<"Tung do diem C la y = ";cin>>y3;
    AB = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));// Tính độ dài đoạn AB
    BC = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));// Tính độ dài đoạn BC
    AC = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));// Tính độ dài đoạn AC
    // In ra kết quả độ dài AB, BC, AC 
    cout<<"Do dai doan AB = "<<AB<<endl;
    cout<<"Do dai doan BC = "<<BC<<endl;
    cout<<"Do dai doan AC = "<<AC<<endl;
    return 0;
}