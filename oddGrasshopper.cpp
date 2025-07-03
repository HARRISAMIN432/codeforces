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
        long long pn = n % 4;
        if (pn == 0)
            cout << x << endl;
        else if (pn == 1)
            (x & 1) ? cout << x + n << endl : cout << x - n << endl;
        else if (pn == 2)
        {
            (x & 1) ? x += n - 1 : x -= n - 1;
            (x & 1) ? cout << x + n << endl : cout << x - n << endl;
        }
        else
        {
            (x & 1) ? x += n - 2 : x -= n - 2;
            (x & 1) ? x += n - 1 : x -= n - 1;
            (x & 1) ? cout << x + n << endl : cout << x - n << endl;
        }
    }
    return 0;
}