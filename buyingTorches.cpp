#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        long long reqSticks = 1LL * y * k + k;
        long long ans = 1LL * k + (reqSticks - 1 + x - 2) / (x - 1);
        cout << ans << endl;
    }
}