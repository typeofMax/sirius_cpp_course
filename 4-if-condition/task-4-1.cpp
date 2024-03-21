#include <iostream>

using namespace std;
int main()
{
    int a1, b1, a2, b2, dx, dy;
    cin >> a1;
    cin >> b1;
    cin >> a2;
    cin >> b2;
    dx = a1 - a2;
    if (dx < 0) {
        dx = -dx;
    }
    dy = b1 - b2;
    if (dy < 0) {
        dy = -dy;
    }

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;

}
