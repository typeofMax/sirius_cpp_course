#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, r, add;
    cin >> n;
    r = n % 2;
    add = 2 - r;
    n = n + add;

    cout << n << endl;

    return 0;

}
