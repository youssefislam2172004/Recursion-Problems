#include <iostream>
using namespace std;
//Problem-C. Print from N to 1
void PrintFromNTo1(int n)
{
    if (n == 0)
        return;
    else
        cout << n << " ";
    PrintFromNTo1(n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Numbers from " << n << " to 1: ";
    PrintFromNTo1(n);
    return 0;
}

