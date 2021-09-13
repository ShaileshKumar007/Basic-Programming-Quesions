#include <iostream>
#include <math.h>
using namespace std;

int main(){

	long long binary, binaryinput;
	int remainder, decimal_output, quotient, i, j, octal_output[100];

	cout << "Enter a binary number : ";
	cin >> binaryinput;
	binary = binaryinput;
	i = 1;
	decimal_output = 0;

	while (binaryinput > 0){

		remainder = binaryinput % 10;

		decimal_output = decimal_output + remainder * i;

		i = i + i;

		binaryinput = binaryinput / 10;
	}

	i = 1;

	quotient = decimal_output;

	while (quotient > 0){

		octal_output[i++] = quotient % 8;

		quotient = quotient / 8;
	}

	cout << "The equivalent octal value of binary number " << binary << " is : ";

	for (j = i - 1; j > 0; j--){

		cout << octal_output[j];
	}

	return 0;

}