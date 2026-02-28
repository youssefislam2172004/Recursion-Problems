#include <iostream>
using namespace std;
//Problem-B. Print from 1 to N
void PrintFrom1ToN(int start, int n)
{
	if (start > n)
		return;
	else
		cout << start << endl;
	PrintFrom1ToN(++start, n);
}

int main()
{
	int start = 1, number;
	cout << "Enter a number: ";
	cin >> number;
	PrintFrom1ToN(start, number);
	return 0;
}

