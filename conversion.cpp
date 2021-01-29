#include <iostream>

using namespace std;

float getFeet()
{
  float feet;
  cout << "Enter Height Feet" << endl;
  cin >> feet;
  return feet;
}

float getInches()
{
  float inches;
  cout << "Enter Height Inches" << endl;
  cin >> inches;
  return inches;
}

float convertFtoM(float feet, float inches)
{
  float iFeet;
  float totalFeet;
  float meters;

  iFeet = inches/12;
  totalFeet = feet + iFeet;
  meters = totalFeet * 0.3048;
  return meters;
}

void output(float meters)
{
  int totalCentimeters;
  int numOfmeters = (int)meters;

  totalCentimeters = meters * 100;
  int numOfCentimeters = totalCentimeters % 100;

  cout << numOfmeters << " ";
  cout << numOfCentimeters;
}

int main()
{
  string userInput = "";
  while(userInput != "exit")
  {
  float feet = getFeet();
  float inches = getInches();
  float meters = convertFtoM(feet, inches);
  output(meters);
  cin >> userInput;
  }

  return 0;
}
