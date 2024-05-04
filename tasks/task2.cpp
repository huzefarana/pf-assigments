// Task.2 
// Write a program in C++ to print the sum of two numbers. Take input from user 
//			Sample Output:
//			The sum of 29 and 30 is : 59

#include <iostream>
using namespace std;
int main()
{
    int number1, number2, sum;
    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    sum = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is: " << sum << "\n";
    return 0;
}

