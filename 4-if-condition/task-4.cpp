#include <iostream>

using namespace std;
int main()
{
    int a1, b1, a2, b2;
    cin >> a1;
    cin >> b1;
    cin >> a2;
    cin >> b2;

    if ((a1 == b1 && a2 == b2) || (a1 + b1 == a2 + b2)) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;

}
