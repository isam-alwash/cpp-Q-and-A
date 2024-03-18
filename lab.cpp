#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int a[3][3];
    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
            cin>>a[i][j];
        }
    }
    for(int i = 0 , j = 0; i < 3 ; i++ , j++){
        for(int k = 0 ; k < i;k++)
        cout<<" ";
        cout<<a[i][j]<<endl;1
    }
    return 0 ;
}