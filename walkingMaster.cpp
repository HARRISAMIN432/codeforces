#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c - a > d - b || b > d)
            cout << -1 << endl;
        else
        {
            int ans = 0;
            if (a > c)
                ans += a - c;
            else if (c >= a)
            {
                ans += c - a;
                b += c - a;
            }
            ans += (2 * (d - b));
            cout << ans << endl;
        }
    }
    return 0;
}