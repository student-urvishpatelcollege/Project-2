#include <iostream>
using namespace std;
int main()
{
    int num, f_digit, l_digit;
    cout << "Enter a number: ";
    cin >> num;

    l_digit = num % 10;

    while (num >= 10)
    {
        num /= 10;
    }
    f_digit = num;

    int sum = f_digit + l_digit;
    cout << "Sum of the first and last digits: " << sum << endl;
    return 0;
}