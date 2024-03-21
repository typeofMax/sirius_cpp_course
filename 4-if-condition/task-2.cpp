#include <iostream>

using namespace std;
int main()
{
    int k, l, m, n;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;

    if ((m + n) % 2 == (k + l) % 2) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;

}
