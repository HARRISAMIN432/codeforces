#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << " " << 0 << endl;
        else
        {
            long long diff = abs(a - b);
            cout << abs(a - b) << " " << min(a % diff, diff - a % diff) << endl;
        }
    }
}