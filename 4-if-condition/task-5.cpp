#include <iostream>

using namespace std;
int main()
{
    int a;
    cin >> a;
    if ((a % 4 == 0 and a % 100 != 0) or (a % 400 == 0)){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;

}
