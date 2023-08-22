#include <iostream>
#include <cstring>
using namespace std;


int
main ()
{
  int flag = 0, length, i;
  char str[20];
  cout << "Enter your string" << endl;
  cin >> str;
  length = strlen (str);
  for (int i = 0; i < length; i++)
    {
      if (str[i] == str[length - i - 1])
	{
	  flag = 1;
	  break;
	}
    }
  //label:
  if (flag == 0)
    {
      cout << "String is not a palindrome";
    }
  else
    {
      cout << "String is a palindrome";
    }
  return 0;
}

