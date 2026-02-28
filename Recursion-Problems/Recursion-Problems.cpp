#include <iostream>
using namespace std;
//E. Base Converssion
void ConvertToBinary(int n)
{
	if (n == 0)
		return;
	ConvertToBinary(n / 2);
	if (n % 2 == 0)
		cout << "0";
	else
		cout << "1";
}

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Binary representation: ";
	ConvertToBinary(number);
	return 0;
}

