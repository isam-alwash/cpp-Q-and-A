/*
Write a program to read an array of 10 numbers and reverse it into another array.
*/
#include<iostream>
using namespace std;
int main (){
    int a[10],b[10];
    cout<<"Enter 10 numbers";
    for(int i = 0 , j = 9; i < 10 ; i++ , j--){
        cin>>a[i];
        b[j] = a[i];
    }
    for(int i = 0 ; i < 10 ; i++)
    cout<<b[i]<<" ";
return 0;
}