#include iostream

using namespace std;

int main()
{
    double ton = 35273.92;
    double cerealWeight = 0;
    double weightInTons = 0;

    cout << "Please eneter the weight of the cereal box: " << endl;
    cin >> cerealWeight;
    weightInTons = cerealWeight/ton;
    cout << "Weight in tons is " << weightInTons << endl;

    numCerealBoxes = ton/cerealWeight;
    cout << "Number of Cereal Boxes is " << numCerealBoxes;

    return 0;
}
