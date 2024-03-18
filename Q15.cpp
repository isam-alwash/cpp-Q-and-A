/*
Write a c++ program to arrangment the array a[10] ascending, then print array a[10], maximum and minimum number.
*/
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    // Input elements for the array
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    // Selection sort implementation
    for (int i = 0; i < 9; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < 10; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    // Print the sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"The maximum value in the array is("<<arr[9]<<")"<<endl;
    cout<<"The minimum value in the array is("<<arr[0]<<")";
    return 0;
}
