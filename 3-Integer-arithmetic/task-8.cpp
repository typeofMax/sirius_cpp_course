#include <iostream>

using namespace std;

int main()
{
    int k, n, page_number, string_number;
    cin >> k >> n;

    page_number = (n - 1) / k + 1;
    string_number = (n - 1) % k + 1;

    cout << page_number << " " << string_number << endl;


    return 0;
}
