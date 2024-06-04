## Lab 1

1. Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.

```cpp
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
```

2. Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.

```cpp
#include <iostream>

using namespace std;

int main()
{
  string sentence = "idea without execution is worthless";

  // store the address of the first character of the sentence to the pointer
  char *ptr = &sentence[0];
  int position = 0;

  // iterate through the sentence until the character 'C' is found
  while (*ptr != 'C')
  {
    ptr++;
    position++;

    // if the end of the sentence is reached, break the loop
    if (*ptr == '\0')
    {
      break;
    }
  }

  if (position < sentence.length())
  {
    cout << "The position of the character 'C' in the sentence is " << position << endl;
  }
  else
  {
    cout << "The character 'C' is not found in the sentence." << endl;
  }

  return 0;
}
```
