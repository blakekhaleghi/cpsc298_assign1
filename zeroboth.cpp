#include <iostream>

using namespace std;

void zeroBoth(int num1, int num2)
{
  (*num1) = 0;
  (*num2) = 0;
  cout << "Num 1 = " << *num1 << " " << "Num 2 = " << *num2 << endl;
}

int main()
{
  int x = 10;
  int y = 5;
  zeroBoth(&x, &y);
  cout << "x = " << x << " " << "y = " << y << endl;

  return 0;
}
