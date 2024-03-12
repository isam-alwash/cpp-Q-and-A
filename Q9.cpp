/*
Write a program to read an array of 10 numbers and sort it descending order.
*/
#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int k = 0 ; k < 10 ; k++)
    cin>>a[k];
    for (int j = 0; j < 10; ++j) {
    for (int i = 0; i < 10 - j; ++i) {
      if (a[i] < a[i + 1]) {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < 10; ++i) {
    cout << "  " << a[i];
  }
  cout << "\n";
        return 0;
}