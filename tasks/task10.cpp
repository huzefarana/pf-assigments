//write a program that uses a 2D array to store the alphabets and then print them using nested loops.

#include <iostream>
using namespace std;

int main()
{
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << "\n";
        }
    }
}