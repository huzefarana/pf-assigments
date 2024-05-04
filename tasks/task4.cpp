// Task.4 
// Write a C++ program to declare an integer variable Hours and
// assign it a value of your choice and convert Hours in terms of minutes.

#include <iostream>
using namespace std;

int main()
{
    int Hours = 24;
    int Minutes = Hours * 60;
    cout << "Hours: " << Hours << " is equal to " << Minutes << " minutes." << "\n";
    return 0;
}