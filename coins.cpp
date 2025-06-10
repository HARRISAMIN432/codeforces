#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if ((n & 1) == 0)
            cout << "YES" << endl;
        else if (n % 2 == 1 && k % 2 == 0)
            cout << "NO" << endl;
        else
            ((n - k) % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}