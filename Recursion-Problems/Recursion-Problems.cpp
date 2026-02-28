#include <iostream>
using namespace std;
//Problem-A. Print Recursion

void Print(int n)
{
    if (n == 0)
        return;
    else
        cout << "I love Recursion" << endl;
    Print(n - 1);
}

int main()
{
    int numbers;
    cout << "Enter the number of times you want to print 'I love Recursion': ";
    cin >> numbers;
    Print(numbers);
    return 0;
}