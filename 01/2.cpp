// Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.

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