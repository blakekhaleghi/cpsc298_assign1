#include iostream

using namespace std;

int main()
{
  int capacity = 0;
  int numPeopleMeeting = 0;
  int peopleRemoved = 0;
  int peopleAdded = 0;

  cout << "Capacity of room: " << endl;
  cin >> capacity;

  cout << "Number of people in the meeting: " << endl;
  cin >> numPeopleMeeting;

  if(numPeopleMeeting <= capacity)
    {
        cout << "This meeting is legal" << endl;
        peopleAdded = capacity - numPeopleMeeting;
        cout << "Number of people that can be added: " << peopleAdded << endl;
    }
    else
    {
      cout << "This meeting is NOT legal" << endl;
      peopleRemoved = numPeopleMeeting - capacity;
      cout << "Number of people that need to be removed: " << peopleRemoved << endl;
    }


  return 0;
}
