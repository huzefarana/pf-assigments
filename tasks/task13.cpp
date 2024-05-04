//write a program that uses a 1D array to store 10 numbers and then find the second largest number.

#include <iostream>
using namespace std;

int find_second_largest(int nums[], int n)
{
    int largest = nums[0];
    int second_largest = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largest)
        {
            second_largest = largest;
            largest = nums[i];
        }
        else if (nums[i] > second_largest && nums[i] != largest)
        {
            second_largest = nums[i];
        }
    }
    return second_largest;
}

int main()
{
    int nums[10];
    cout << "Please enter 10 numbers one by one" << "\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }
    cout << "The second largest number is " << find_second_largest(nums, 10) << "\n";
    return 0;
}
