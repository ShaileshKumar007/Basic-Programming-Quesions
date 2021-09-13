#include <iostream>
#include <math.h>
using namespace std;

int main()

{

	long int i, num;

	int x, y = 0;

	cout << "Enter a binary number: ";

	cin >> num;

	cout << "\nThe decimal conversion of " << num << " is ";

	for (i = 0; num != 0; i++)

	{

		x = num % 10;

		y = (x) *(pow(2, i)) + y;

		num = num / 10;
	}

	cout << y;

	return 0;

}