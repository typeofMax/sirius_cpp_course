#include <iostream>

using namespace std;
int main()
{
    int n, k;
    cin >> n;
    cin >> k;


    cout << (n - k % n) % n ;

    return 0;

}
