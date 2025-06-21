#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        int pn = n % 4;
        (n == 0) ? cout << x << endl : ((x & 1) ? ((pn == 2) ? (cout << (x + n - 1 - n) << endl) : ((pn == 1) ? cout << x + n << endl : cout << x + n - 2 - n + 1 - n << endl)) : (pn == 2) ? (cout << (x - n + 1 + n) << endl) : ((pn == 1) ? cout << x - n << endl : cout << x - n + 2 + n - 1 + n << endl));
    }
    return 0;
}