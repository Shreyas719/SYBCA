
#include <iostream>
using namespace std;
int main()
{
   long int decnum, rem, quot;
   char hexadecnum[100];
   int i = 1, j, temp;
   cout << "Enter any decimal number : "<<endl;
   cin >> decnum;
   quot = decnum;
   while (quot != 0)
   {
      temp = quot % 16;
      if (temp < 10)
      {

         temp = temp + 48;
      }
      else
      {
         temp = temp + 55;
      }
      hexadecnum[i++] = temp;
      quot = quot / 16;
   }
   cout << "Equivalent hexadecimal value of " << decnum << " is : ";
   for (j = i - 1; j > 0; j--)
   {
      cout << hexadecnum[j];
   }
   return 0;
}