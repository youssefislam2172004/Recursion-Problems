#include <iostream>
using namespace std;
//G. Pyramid
void Pyramid(int w, int n)
{
	if (n == 0)
		return;
	else
	{
		for (int i = 0; i < n; i++)
			cout << " ";
		for (int i = 0; i < w; i++)
			cout << "*";
	}
	cout << endl;
	Pyramid(w + 2, n - 1);
}

int main()
{
	int width = 1, NumberOfLines;
	cout << "Enter the number of lines: ";
	cin >> NumberOfLines;
	Pyramid(width, NumberOfLines);
	return 0;
}

