/*
write a c++ program to read 10 intger number the find sum of even number using array.
*/
#include<iostream>
using namespace std;
int main(){
    int a[5];
    int sum = 0;
    for(int i = 0; i < 0 ; i++){
        cin>>a[i];
        if(a[i] % 2 == 0)
        sum += a[i];
    }
    cout<<"The sum of even number is : "<<sum;
    return 0;
}
