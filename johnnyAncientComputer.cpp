#include <iostream>
using namespace std;

bool po2(long long n)
{
    return (!(n & (n - 1)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long l = max(a, b), s = min(a, b);
        if (l == s)
            cout << 0 << endl;
        else if (l % s > 0)
            cout << -1 << endl;
        else
        {
            if (po2(l / s))
            {
                long long ans = 0, k = l / s, tmp = 1;
                for (int i = 0; i < 100; i++)
                {
                    ans++;
                    tmp *= 2;
                    if (tmp == k)
                        break;
                }
                cout << 1LL * (ans + 2) / 3 << endl;
            }
            else
                cout << -1 << endl;
        }
    }
}