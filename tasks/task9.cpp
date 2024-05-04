
// write a program that uses a 3D array to store the alphabets and then print them using nested loops.
// The array should be of size 2x2x4.

#include <iostream>
using namespace std;

int main()
{
   string letters[2][3][4] = {
    {
      {"a", "b", "c"},
      {"d", "e", "f"}
    },
    {
      {"g", "h", "i"},
      {"j", "k", "l"}
   }
   
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";
    }
  }
} 
}