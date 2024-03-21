#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b >= c && d >= a) {
        cout << "YES" << endl;
    } else {
        cout << "NO";
    }

    return 0;

}
