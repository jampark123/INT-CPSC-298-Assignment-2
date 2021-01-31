#include <iostream>

using namespace std;
int main ()

{
  /*
  assignment 2
  problem 1

  Program asks the user to input 10 non-negative integers. If the user enters
  a negative value, then the program will ask the user to enter a non-negative
  value. The program will do this until the user enters a non-negative value.
  */

  //Fills the array with 0's.
  int numberArray[10];

  for (int i = 0; i < 10; ++i)
  {
    numberArray[i] = 0;
  }

  //Prompts the user to enter 10 non-negative numbers.
  cout << "Enter 10 non-negative numbers, please." << endl;
  for (int i = 0; i < 10; ++i)
  {
    cin >> numberArray[i];
    //Checks if a number inputted is non-negative. If the number is negative,
    //then the program prompts the user to enter a non-negative number until
    //the user does so.
    if (numberArray[i] < 0)
    {
      cout << "Please enter a non-negative number." << endl;
      if(i >= 0 && i < 10)
      {
        --i;
      }
      continue;
    }
  }

  //Outputs the numbers from the array.
  cout << "The numbers from the array: " << endl;
  for (int i = 0; i < 10; ++i)
  {
    cout << numberArray[i] << endl;
  }

  return 0;
}
