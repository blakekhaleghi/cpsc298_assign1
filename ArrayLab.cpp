#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = 0;
  for (int i = 0; i < sizeof(arr); ++i)
  {
    cin >> arr[i];
    sum = +arr[i];
  }
  return 0;
}
