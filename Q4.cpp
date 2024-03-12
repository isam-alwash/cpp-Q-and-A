/*
find the summaiton of the given array |  1  |  3  |  5  |# 7 #|
                                      |  9  |  10 |# 3 #|  2  |
                                      |  15 |# 10#|  27 |  30 |
                                      |#100#|  90 |  80 |  70 |
*/
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int a[4][4]{{  1  ,  3  ,  5  ,  7  },
                {  9  ,  10 ,  3  ,  2  },
                {  15 ,  10 ,  27 ,  30 },
                { 100 ,  90 ,  80 ,  70 }};
    for(int i = 0 , j = 3; i < 4 ; i++ , j--){
        sum += a[i][j]; // OR sum = sum + a[i][j];
        }
        cout<<sum;
 return 0 ;
}