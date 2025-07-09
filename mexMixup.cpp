#include <iostream>
#include <vector>
using namespace std;

int xorUptoN(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = xorUptoN(a - 1);
        if (x == b)
            cout << a << endl;
        else if ((x ^ b) == a)
            cout << a + 2 << endl;
        else
            cout << a + 1 << endl;
    }
}