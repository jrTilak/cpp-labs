// 1. Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.

#include <iostream>

using namespace std;
const string MONTHS[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
  // years -> the number of years you want to calculate the expenditure for
  int years, months = 12;
  cout << "Enter the number of years: ";
  cin >> years;

  // expenditure -> a 2D array to store the expenditure for each year and month
  float expenditure[years][months];

  // input the expenditure for each year and month
  for (int i = 0; i < years; i++)
  {
    for (int j = 0; j < months; j++)
    {
      cout << "Enter the expenditure for year " << i + 1 << " month " << MONTHS[j] << ": ";
      cin >> expenditure[i][j];
    }
    cout << endl;
  }

  // display the expenditure table
  cout << "\nExpenditure table:" << endl;
  for (int i = 0; i < years; i++)
  {
    cout << "Year " << i + 1 << ": ";
    for (int j = 0; j < months; j++)
    {
      cout << expenditure[i][j] << " ";
    }
    cout << endl;
  }

  // calculate the sum and average of the expenditure
  float sum = 0;
  for (int i = 0; i < years; i++)
  {
    for (int j = 0; j < months; j++)
    {
      sum += expenditure[i][j];
    }
  }

  // display the sum and average of the expenditure
  cout << "\nTotal expenditure: " << sum << endl;
  cout << "Average expenditure: " << sum / (years * months) << endl;

  return 0;
}
