/*
Write a c++ program to arrangment the array a[5] descending, then print array a[5], maximum and minimum number.
*/
#include <iostream>
using namespace std;
int main() {
    int a[5];
    // Input elements for the array
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    // Selection sort implementation
    for (int i = 0; i < 4; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < 5; ++j) {
            if (a[j] > a[minIndex])
                minIndex = j;
        }
        if (minIndex != i) {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
    // Print the sorted array
    cout << "Sorted aay:\n";
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout<<"The maximum value in the array is("<<a[0]<<")"<<endl;
    cout<<"The minimum value in the array is("<<a[4]<<")";
    return 0;
}
