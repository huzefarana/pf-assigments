//Write a program to print the address of a variable whose value is input from user.

#include <iostream>
using namespace std;

int main()
{
    int num;
    int *numPtr = &num;
    cout << "Please enter any inetger: ";
    cin >> num;
    cout << "The address of the integer is: " << numPtr << "\n";
}