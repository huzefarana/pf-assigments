#include <iostream>
using namespace std;

/**
 * Calculates the sum of the even digits in a given number.
 * 
 * @param evenDigits The number from which to calculate the sum of even digits.
 * @return The sum of the even digits in the given number.
 */

int sumOfEvenDigits(int evenDigits){
    int sum = 0;
    while(evenDigits > 0){
        sum += evenDigits % 10;
        evenDigits /= 10;
    }
    return sum;
}

int main(){
    string studentId = "bc12346789"; //student id
    int digitalPartsOfStudentId = 12346789;
    int evenDigitsOfStudentId = 2468;
    int sum = sumOfEvenDigits(evenDigitsOfStudentId);
    cout << "Student ID:" << studentId << "\n";
    cout << "Digital part of the student ID is: " << digitalPartsOfStudentId << "\n";
    cout << "Even Digits: " << evenDigitsOfStudentId << "\n";
    cout << "Sum of Even Digits is: " << sum;
    return 0;
}