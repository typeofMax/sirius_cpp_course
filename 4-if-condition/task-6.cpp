#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a - b;

    if (c == 0){
        cout << 0 << endl;
    } else {
        if (c > 0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }


    return 0;

}
