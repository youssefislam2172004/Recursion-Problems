#include <iostream>
using namespace std;
//Problem-F. Print Even Indices
void PrintEvenIndices(int arr[], int ArraySize, int n)
{
	if (n >= ArraySize)
		return;
	cout << arr[n] << " ";
	PrintEvenIndices(arr, ArraySize, n + 2);
}
int main()
{
	int ArraySize, n = 0;
	cout << "Enter the size of the array: ";
	cin >> ArraySize;
	int* arr = new int[ArraySize];
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < ArraySize; i++)
		cin >> arr[i];
	cout << "The elements at even indices are: ";
	PrintEvenIndices(arr, ArraySize, n);
	delete[] arr;
	return 0;
}

