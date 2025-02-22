#include <iostream>
using namespace std;

int main()
{
  int year, month;

  cout << "Enter year: ";
  cin >> year;

  cout << "Enter month: ";
  cin >> month;

  bool isLeap = (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
  int days;
  switch (month)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    days = 31;
    break;

  case 4: case 6: case 9: case 11:
    days = 30;
    break; 
  
  case 2:
    if (isLeap)
    {
        days = 29;
    }
    else
    {
        days = 28;
    }
    break;
   
  default:
    cout << "Invalid month entered." << endl;
    return 1;
  }
  cout << "The month you entered has " << days << " days." << endl;

  return 0;
}