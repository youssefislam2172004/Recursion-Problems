#include <iostream>
#include <string>
using namespace std;
//I. Count Vowels
int countVowels(string str, char vowels[], int i)
{
	if (i == str.size())
		return 0;
	int count = 0;
	for (int j = 0; j < 5; j++)
	{
		if (tolower(str[i]) == vowels[j])
			count++;
	}
	return count + countVowels(str, vowels, i + 1);
}

int main()
{
	string str;
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
	cout << "Enter a string: ";
	getline(cin, str);
	int count = countVowels(str, vowels, 0);
	cout << "Number of vowels in the string: " << count << endl;
	return 0;
}

