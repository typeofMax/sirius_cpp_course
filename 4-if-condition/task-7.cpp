#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (b > a) {
        a = b;
    }
    if (c > a) {
        a = c;
    }
    cout << a << endl;


    return 0;

}
