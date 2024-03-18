#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long a, b, n;
    cin >> a;
    cin >> b;
    cin >> n;

    cout << a * n + (b * n) / 100 << " " << (b * n) % 100 << endl;

    return 0;

}
