#include <iostream>
#include <iomanip>
using namespace std;
/*
assignment 2
problem 3

Program uses the function addTax to calculate the new cost of an item with its
original cost and tax rate, which are both inputted by the user.
*/

//Function takes the sales tax rate and original cost of an item to find and
//return the total cost of the item with the sales tax.
float addTax(float salesTax, float origCost)
{
  float newCost;
  //Tax rate must be divided by 100 because it is a percentage.
  newCost = origCost + (salesTax / 100.0 * origCost);
  return newCost;
}

//Prompts user to input the original cost of the object and it's associated
//sales tax rate to calculate the total cost of the item with tax, using the
//function, addTax.
int main()
{
  float origCost;
  float taxRate;
  float newCost;

  //Prompts user to input original price and tax rate.
  cout << "Please enter the original cost of the item: " << endl;
  cin >> origCost;
  cout << "Please enter the tax rate of the item in percentage form: " << endl;
  //Tax rate needs to be inputted as a percentage or the program will not
  //function correctly.
  cin >> taxRate;

  newCost = addTax(taxRate, origCost);

  //Prints the cost in dollar form.
  cout << "Cost with tax is $" << fixed << setprecision(2) << newCost << "."
       << endl;
  return 0;
}
