/*
Print the lower triangle              |  1  |  3  |  5  |  7  |
                                      |# 9 #|  10 |  3  |  2  |
                                      |# 15#|# 10#|  27 |  30 |
                                      |#100#|# 90#|# 80#|  70 |
*/
#include<iostream>
using namespace std;
int main(){
    int a[4][4]{{  1  ,  3  ,  5  ,  7  },
                {  9  ,  10 ,  3  ,  2  },
                {  15 ,  10 ,  27 ,  30 },
                { 100 ,  90 ,  80 ,  70 }};
    for(int i = 0 ; i < 4 ; i ++){
        for(int j = 0 ; j < i ; j ++)
        cout<<" "<<a[i][j];
        cout<<"\n";
    }
 return 0 ;
}