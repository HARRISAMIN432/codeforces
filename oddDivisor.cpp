#include <iostream>
using namespace std;

bool hasOddDivisor(long long n)
{
    while (n > 2)
    {
        if (n & 1)
            return true;
        n /= 2;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        (hasOddDivisor(n)) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
