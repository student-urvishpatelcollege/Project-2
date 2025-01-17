#include <iostream>
using namespace std;
int main()
{
    int number, temp = 0;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        number /= 10;
        temp++;
    }

    cout << "Number of digits: " << temp << endl;

    return 0;
}