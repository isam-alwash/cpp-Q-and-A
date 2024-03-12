/*
Write a program to read a string and convert all upper case letters (capital  )into lower case letters (small) and all lower case letters into upper case  letters.
*/
#include <iostream>
using namespace std;
int main() {
  char str[100];

  cout << "Enter a string: ";
  cin.getline(str, 100);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      // Convert lowercase to uppercase
      str[i] = str[i] - 32;
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
      // Convert uppercase to lowercase
      str[i] = str[i] + 32;
    }
  }

  cout << "Converted string: " << str << endl;

  return 0;
}