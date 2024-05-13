#include <iostream>
#include <string.h>
using namespace std;

void ConvertUpper(char name[])
{
  int size = strlen(name);
  for (int i = 0; i < size; i++)
  { // test case= let see the convert ( c )
    //  c - a + A    meeans change the assic value
    //  99-97+65= 67 =(C)  67 is assic value for Captital C

    name[i] = name[i] - 'a' + 'A';
  }
}

void Convertlower(char name[])
{
  int size = strlen(name);
  for (int i = 0; i < size; i++)
  { // test case= let see the convert ( C )
    //  C - A + a    meeans change the assic value
    //  67-65+97= 99 =(c)  67 is assic value for small c

    name[i] = name[i] - 'A' + 'a';
  }
}

int main()
{

  char name[20];
  cout << "Enter the lower case letter to convert upper case letter: " << endl;
  cin >> name;
  ConvertUpper(name);
  cout << "upper case is : " << name << endl;
  char name2[20];

  cout << "Enter the uppre case letter to convert upper case letter: " << endl;
  cin >> name2;
  Convertlower(name2);
  cout << "lower case is : " << name2;

  return 0;
}