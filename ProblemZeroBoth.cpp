#include <iostream>

using namespace std;
/*
assignment 2
problem 2

Program uses function bothZero which takes in two values inputted by the user
and outputs both as zeros.
*/

//Function uses two call-by-reference parameters to change both inputted values
//to zero.
void bothZero(int& val1, int& val2)
{
  val1 = 0;
  val2 = 0;
}

int main()
{
  int num1;
  int num2;

  //Prompts user to input two values.
  cout << "Please input a value." << endl;
  cin >> num1;
  cout << "Please input a value." << endl;
  cin >> num2;

  bothZero(num1, num2);

  cout << "Inputted values have become " << num1 << " and " << num2 << "."
       << endl;

  return 0;
}
