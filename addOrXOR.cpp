#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (b < a)
            ((a == b + 1) && (a & 1)) ? cout << y << endl : cout << -1 << endl;
        else if (b == a)
            cout << 0 << endl;
        else if (x <= y)
            cout << (b - a) * x << endl;
        else if (!((b - a) & 1))
            cout << ((b - a) / 2) * (x + y) << endl;
        else
            (a % 2 == 0) ? cout << ((((b - a) / 2) + 1) * y) + (((b - a) / 2) * x) << endl : cout << ((((b - a) / 2) + 1) * x) + (((b - a) / 2) * y) << endl;
    }
}