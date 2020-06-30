/* Nhập vào một ma trận có kích thước (5 x 5) :{0,1,1,0,0
						                        1,0,1,0,0
						                        1,1,0,1,1
						                        1,0,1,0,1
						                        0,0,1,1,0}
- In ra màn hình các đỉnh kề với nhau
*/
#include <iostream>

using namespace std; 
int main(){
    int matran[5][5]= {{0,1,1,0,0},
					   {1,0,1,0,0},
					   {1,1,0,1,1},
				       {1,0,1,0,1},
					   {0,0,1,1,0},
					   };
    cout<<"Cac dinh ke voi nhau la: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matran[i][j]>0){
                cout<<"Dinh "<<i+1<<" ke voi dinh "<<j+1<<endl;
            }
        }
    }
    return 0;
}