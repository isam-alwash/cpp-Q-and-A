/*
Write a program to read a string search for the number of accurrences of a spicific letter. That is if the string is TECHNOLOGY and the letter is (O).
*/
#include<iostream>
using namespace std;
int main(){
    int count = 0;
    char a[100] {'T','E','C','H','N','O','L','O','G','Y'};
    for (int i = 0; a[i] != '\0'; i++){
        if(a[i] == 'O')
        count++;
    }
        cout<<count;
        return 0;
}