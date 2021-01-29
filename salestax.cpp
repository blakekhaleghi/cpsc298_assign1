#include <iostream>

using namespace std;

float addTax(float taxRate, float cost)
{
  float salesTax;
  float totalCost;
  salesTax = cost * taxRate/100;
  totalCost = cost + salesTax;
  return totalCost;
}

int main()
{
  float x = addTax(3.5, 65);
  cout << x << endl;

  return 0;
}
