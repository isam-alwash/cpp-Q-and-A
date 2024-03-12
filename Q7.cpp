/*
Calculate and print the avarage element in the number array.
*/
#include<iostream>
using namespace std;
int main(){
    int a[10];
    int c = 0 , avg = 0 , sum = 0;

    for(int i = 0 ; i < 10 ; i++){
        cin>>a[i];
       sum += a[i];
       c++;
    }
    avg = sum / c;
    cout<<avg;
        return 0;
}