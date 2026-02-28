#include <iostream>
using namespace std;
//J. Factorial
int Factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Factorial of " << number << " is: " << Factorial(number) << endl;
}

