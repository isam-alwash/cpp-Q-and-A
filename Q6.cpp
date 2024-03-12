/*
write a program to create and print   |  1  |  3  |  5  |  7  |
an arry to replace each odd number in |  9  |  10 |  3  |  2  |
this given array with 'o' and each    |  15 |  10 |  27 |  30 |
even number with 'e'                  | 100 |  90 |  80 |  70 |
*/
#include<iostream>
using namespace std;
int main(){
    char b[4][4];
    int a[4][4]{{  1  ,  3  ,  5  ,  7  },
                {  9  ,  10 ,  3  ,  2  },
                {  15 ,  10 ,  27 ,  30 },
                { 100 ,  90 ,  80 ,  70 }};
    for(int i = 0; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(a[i][j] % 2 == 0)
            b[i][j] = 'e';
        else
            b[i][j] = 'o';
        }
         for(int i = 0; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
        cout<<b[i][j]<<" ";
        }
        cout<<"\n";
        }
    }
 return 0 ;
}