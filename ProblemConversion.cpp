#include <iostream>
#include <sstream>
using namespace std;
/*
assignment 2
problem 4

Program takes the length in feet and inches and converts those combined values
into meters and centimeters. The program does this over and over again until
user enters "exit".
*/

//This function asks the user to input a double value for feet and another
//double value for inches. The function also checks if inches is over 12 inches
//in which feet is incremented by 1 for every 12 inches.
void takeInput(double& feet, double& inches)
{
  cout << "Enter length in feet, please: " << endl;
  cin >> feet;
  cout << "Enter remaining length in inches, please: " << endl;
  cin >> inches;

  //Checks if inches is less than 12 and increments feet however many times 12
  //can fit into inches.
  while (inches >= 12.0)
  {
    inches -= 12.0;
    feet++;
  }
}

//This function converts the inputted feet and inches into meters and returns it
//as a double.
double conversionFromFeetToMeters(double feet, double inches)
{
  //Gets overall lenght in feet.
  double overallLengthFeet = feet + inches / 12.0;
  //Returns length in meters.
  return overallLengthFeet * 0.3048;
}

//Function takes the calculated value in meters and converts it to centimeters.
double conversionFromMetersToCentimeters(double meters)
{
  double centimeters;
  //Coverting meters to centimeters.
  return meters * 100.0;
}

//Function outputs the length inputted in feet and inches, and the corresponding
//values in meters and centimeters. The function also outputs the units based
//on the values being 1 or not.
void outputNumbers(double feet, double inches, double meters, double centimeters)
{
  //Checks if unit should be foot or feet.
  if(feet == 1)
  {
    cout << feet << " foot" << endl;
  }
  else
  {
    cout << feet << " feet" << endl;
  }

  //Checks if unit should be inch or inches.
  if(inches == 1)
  {
    cout << inches << " inch" << endl;
  }
  else
  {
    cout << inches << " inches" << endl;
  }
  cout << "equals to" << endl;

  //Checks if unit should be meter or meters.
  if(meters == 1)
  {
    cout << meters << " meter" << endl;
  }
  else
  {
    cout << meters << " meters" << endl;
  }

  //Checks if unit should be centimeter or centimeters.
  if(meters == 1)
  {
    cout << centimeters << " centimeter" << endl;
  }
  else
  {
    cout << centimeters << " centimeters" << endl;
  }
}

int main()
{
  double feet;
  double inches;
  double meters;
  double centimeters;
  string input;

  //Program loops until the user enters "exit" as input.
  while (input.find("exit") == string::npos)
  {
    takeInput(feet, inches);
    meters = conversionFromFeetToMeters(feet,inches);
    centimeters = conversionFromMetersToCentimeters(meters);
    outputNumbers(feet, inches, meters, centimeters);
    cout << "Enter any key to go on or type \"exit\" to quit." << endl;
    cin >> input;
  }
}
