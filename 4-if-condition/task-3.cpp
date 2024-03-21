#include <iostream>

using namespace std;
int main()
{
    int k, l, m, n;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;

    if (k == m || l == n) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;

}
