#include <iostream>

using namspace std;

int main()
{
  int numberArray[10];
  int i;

  for(i = 0; i < 10; i++)
  {
    cout << "Enter a non negative number: ";
    cin >> numberArray[i];
  }

  for(i = 0; i < 10; i++)
  {
    cout << numberArray[i] << ", ";
  }

  return 0;
}
