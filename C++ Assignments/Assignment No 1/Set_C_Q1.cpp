#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int number = 1, i, j, k, rows;
cout << "Enter the rows: ";
	cin >> rows;

	for (i = 1; i <= rows; i++)
	{
		
		for (j = i; j < rows; j++)
		{
			cout << setw(5) << "";
		}
		for (k = 1; k <= i; k++)
		{
			cout << setw(5) << number;
			number++;
		}
		cout << endl;
	}

	return 0;
}
