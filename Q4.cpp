/*
Write a program to read an
*/
#include<iostream>
using namespace std;
int main(){
    int array[10];
    for(int k = 0 ; k < 10 ; k++)
    cin>>array[k];
    for (int j = 0; j < 10; ++j) {
    for (int i = 0; i < 10 - j; ++i) {
      if (array[i] < array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < 10; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
        return 0;
}