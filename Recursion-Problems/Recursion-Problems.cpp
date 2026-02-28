#include <iostream>
using namespace std;
//H. Inverted Pyramid
void InvertedPyramid(int w, int n)
{
	if (n == 0)
		return;
	InvertedPyramid(w + 2, n - 1);
	for (int i = 0; i < n; i++)
		cout << " ";
	for (int i = 0; i < w; i++)
		cout << "*";
	cout << endl;
}

int main()
{
	int width = 1, numberOfLines;
	cout << "Enter the number of lines: ";
	cin >> numberOfLines;
	InvertedPyramid(width, numberOfLines);
	return 0;
}

