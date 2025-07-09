#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = INT_MAX;
        for (int i = 0; i <= 40; i++)
        {
            int bb = b + i;
            if (bb == 1)
                continue;
            int temp = 0, t = a;
            while (t > 0)
            {
                temp++;
                t /= bb;
            }
            ans = min(ans, i + temp);
        }
        cout << ans << endl;
    }
}