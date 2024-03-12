/*
You have two arrays x[5] and y[15] ,for each value in array (x) finds out how many times this value occurs in array (y).
*/
#include <iostream>
using namespace std;
int main() {
  int x[5], y[15];

  // Input for array x
  cout << "Enter elements for array x: ";
  for (int i = 0; i < 5; i++) {
    cin >> x[i];
  }

  // Input for array y
  cout << "Enter elements for array y: ";
  for (int i = 0; i < 15; i++) {
    cin >> y[i];
  }

  // Count occurrences for each element in x
  for (int i = 0; i < 5; i++) {
    int count = 0;
    for (int j = 0; j < 15; j++) {
      if (x[i] == y[j]) {
        count++;
      }
    }
    cout << "Element " << x[i] << " occurs " << count << " times in array y\n";
  }

  return 0;
}