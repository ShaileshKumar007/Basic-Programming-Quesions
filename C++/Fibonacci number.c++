#include <iostream>
using namespace std;

int fib(int n)

{
	if (n <= 1)	

		return n;

	else	

		return (fib(n - 1) + fib(n - 2));

}

int main()

{
	int n;

	cout << "Enter the number that you want to calculate:\n";

	cin >> n;

	cout << "Answer:" << fib(n);

    return 0;

}