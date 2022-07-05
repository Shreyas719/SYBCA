#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    try
    {
        int a;
        cout << "Enter a number : ";
        cin >> a;
        if (a < 0)
            throw 1;
        cout << sqrt(a);
    }
    catch (int x)
    {
        cout << "Entered number should be positive.";
    }
    return 0;
}