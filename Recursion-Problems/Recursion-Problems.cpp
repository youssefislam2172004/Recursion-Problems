#include <iostream>
using namespace std;
//Problem-D. Print Digits using Recursion
void PrintDigits(int n)
{
	if (n == 0)
		return;
	PrintDigits(n / 10);
	cout << n % 10 << " ";
}

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Digits of the number: ";
	PrintDigits(number);
	return 0;
}