//1. Write a C++ program to generate the results as shown below:
//   Results:  

//   		 =======Quizzes===============
//			 Enter the score of the first quiz: 90
//			 Enter the score of the second quiz: 75
//			 Enter the score of the third quiz: 91

//			 =======Mid-term==============
//			 Enter the score of the mid-term: 80

//			 =======Final=================
//			 Enter the score of the final: 89  

//				Quiz Total:  256
//				Mid-term:    80
//				Final:       89
//				……………………
//				Total:       425

#include <iostream>
using namespace std;

int main()
{
    int quiz1, quiz2, quiz3, midTerm, final, total;
    cout << "=======Quizzes===============" << "\n";
    cout << "Enter the score of the first quiz: ";
    cin >> quiz1;
    cout << "Enter the score of the second quiz: ";
    cin >> quiz2;
    cout << "Enter the score of the third quiz: ";
    cin >> quiz3;
    cout << "\n";
    cout << "=======Mid-term===============" << "\n";
    cout << "Enter the score of the mid-term: ";
    cin >> midTerm;
    cout << "\n";
    cout << "=======Final=================" << "\n";
    cout << "Enter the score of the final: ";
    cin >> final;
    cout << "\n";
    total = quiz1 + quiz2 + quiz3 + midTerm + final;
    cout << "Quiz Total: " << quiz1 + quiz2 + quiz3 << "\n";
    cout << "Mid-term: " << midTerm << "\n";
    cout << "Final: " << final << "\n";
    cout << "Total: " << total << "\n";
    return 0;
}