/* Đề bài: Nhập vào từ bàn phím ba điểm A, B, C. 
- Tính độ dài các đoạn thẳng AB, BC, CA.
- Kiểm tra xem ABC có phải là một tam giác không và nó là tam giác nào (Vuông, cân, nhọn, tù, đều)
*/

#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    int AB,BC,AC;
    cout<<"Nhap toa do diem A "<<endl;
    cout<<"Hoanh do diem A la x = ";cin>>x1;
    cout<<"Tung do diem A la y = ";cin>>y1;
    cout<<"Nhap toa do diem B "<<endl;
    cout<<"Hoanh do diem B la x = ";cin>>x2;
    cout<<"Tung do diem B la y = ";cin>>y2;
    cout<<"Nhap toa do diem C "<<endl;
    cout<<"Hoanh do diem C la x = ";cin>>x3;
    cout<<"Tung do diem C la y = ";cin>>y3;
    AB = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    BC = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    AC = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    cout<<"Do dai doan AB = "<<AB<<endl;
    cout<<"Do dai doan BC = "<<BC<<endl;
    cout<<"Do dai doan AC = "<<AC<<endl;
    if(AB<BC+AC && AC<BC+AB && BC<AC+AB ){
        if (AB*AB==BC*BC+AC*AC||BC*BC==AC*AC+AB*AB||AC*AC== AB*AB+BC*BC){
            cout<<"ABC la tam giac vuong";
        }
        else if(AB==BC==AC){
            cout<<"ABC la tam giac deu";
        }
        else if(AB==AC||AB==BC||BC==AC){
            cout<<"ABC la tam giac can";
        }
        else if(AB*AB > BC*BC+AC*AC || BC*BC > AB*AB+AC*AC || AC*AC > AB*AB+BC*BC){
            cout<<"ABC la tam giac tu";
        }
        else {
            cout<<"ABC la mot tam giac nhon";
        }
    }
    else {
        cout<<"ABC khong phai la mot tam giac";
    }
    return 0;
}