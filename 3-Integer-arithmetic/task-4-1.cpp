#include <iostream>

using namespace std;
int main()
{
    int n, first_digit, second_digit, third_digit, fourth_digit, sum;
    cin >> n;
    first_digit = n / 1000;
    second_digit = n / 100 % 10;
    third_digit = n % 100 / 10;
    fourth_digit = n % 10;

    cout << first_digit + second_digit + third_digit + fourth_digit << endl;
    return 0;

}
