#include iostream

using namespace std;

int main()
{
  double hourlyRate = 16;
  double overtimeRate = 24;
  double socialSecurity = 0.06;
  double federalTax = 0.14;
  double stateTax = 0.05;
  double medical = 10;
  double hoursWorked;
  double overallPay;
  double socialSecurityUSD;
  double federalTaxUSD;
  double stateTaxUSD;
  double netPay;

  cout << "Enter worked hours this week: " << endl;
  cin >> hoursWorked;

  if (hoursWorked <= 40)
    {
        overallPay = hoursWorked * hourlyRate;
    }
    else
    {
        overallPay = (40 * hourlyRate) + (hoursWorked - 40) * overtimeRate;
    }

    socialSecurityUSD = socialSecurity * overallPay;
    federalTaxUSD = federalTax * overallPay;
    stateTaxUSD = stateTax * overallPay;

    cout << "Overall Pay: " << overallPay << endl;
    cout << "Social Security: " << socialSecurityUSD << ", ";
    cout << "Federal Tax: " << federalTaxUSD << ", ";
    cout << "State Tax: " << stateTaxUSD << ", ";
    cout << "Medical Insurance: " << medical << endl;

    netPay = overallPay - (socialSecurityUSD + federalTaxUSD + stateTaxUSD + medical);
    cout << "Net Pay: " << netPay << endl;

  return 0;
}
