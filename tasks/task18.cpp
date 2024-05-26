// Write a program to print the value of the address of the pointer to a variable whose value is input from user.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int *numPtr = &num;
    cout << "Please enter any inetger: ";
    cin >> num;
    cout << "The value of the address of the pointer to int is: " << numPtr << "\n";
    return 0;
}