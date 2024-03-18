#include<iostream>
using namespace std;
int main(){
    int a[3][3]{{ 1 , 2 , 3 },
                { 4 , 5 , 6 },
                { 7 , 8 , 9 }};
    int temp[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 3 ; j > 0 ; j--){
            temp[j][i] = a[i][j] ;
        }
    }

    for(int x = 0; x < 3 ; x++){
        for(int y = 0 ; y < 3 ; y++){
        cout<<temp[x][y]<<" ";
        }
    }
    return 0;
}