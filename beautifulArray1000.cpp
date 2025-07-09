#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        if (s / k < b || s - ((k * b) + (k - 1)) > (k - 1) * (n - 1))
            cout << -1 << endl;
        else if (s / k == b)
        {
            cout << s;
            for (int i = 1; i < n; i++)
                cout << " " << 0;
            cout << endl;
        }
        else
        {
            cout << k * b + (k - 1);
            n--;
            s -= (k * b) + k - 1;
            while (s >= k - 1)
            {
                cout << " " << k - 1;
                s -= k - 1;
                n--;
            }
            if (s > 0)
                cout << " " << s;
            n--;
            while (n--)
                cout << " " << 0;
            cout << endl;
        }
    }
}