/*
Write a c++ program to find the power of an integer without using cmath header. 
*/
#include <iostream>
using namespace std;
double power( int x , int y = 2){
    int pow = 1;   
    for(int i = 0; i < y;i++){
    pow *= x;
    }
    return pow ;
}
int main(){
    cout<<power(2,4);
 return 0;   
}