#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, ad, bc;
    cin >> n;
    a = n / 1000;
    b = n / 100 % 10;
    c = n % 100 / 10;
    d = n % 10;

    ad = a - d;
    bc = b - c;

    cout << (ad * ad + bc * bc) + 1  << endl;


    return 0;
}
