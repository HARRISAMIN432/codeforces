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
        long long n;
        cin >> n;
        ((n & 1) || n < 4) ? cout << -1 << endl : cout << n / 6 + ((n % 6 == 0) ? 0 : 1) << " " << n / 4 << endl;
    }
    return 0;
}