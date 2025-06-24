#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        bool tooSmall = false, tooLarge = false;
        long long ls = (k * (k + 1) / 2), rs = k * (2 * n - k + 1) / 2;
        cout << ((ls > x || rs < x) ? "NO" : "YES") << endl;
    }
    return 0;
}