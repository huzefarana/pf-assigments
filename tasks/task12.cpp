//write a program that uses a 1D array to store 10 numbers and then find the largest number.

#include <iostream>
using namespace std;

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int largest_num = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (nums[i] > largest_num)
        {
            largest_num = nums[i];
        }
    }
    cout << "The largest number is " << largest_num << "\n";
    return 0;
}
