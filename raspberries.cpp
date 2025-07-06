#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        if (k != 4)
        {
            int i = 0, ans = 5;
            while (i < n)
            {
                if (nums[i] % k == 0)
                    break;
                ans = min(ans, k - nums[i] % k);
                i++;
            }
            (i == n) ? cout << ans << endl : cout << 0 << endl;
        }
        else
        {
            int i = 0, ec = 0;
            bool t = false, f = false;
            while (i < n)
            {
                if (nums[i] % 4 == 3)
                    t = true;
                if (nums[i] % 4 == 0)
                    f = true;
                if (!(nums[i] & 1))
                    ec++;
                if (ec == 2)
                    break;
                i++;
            }
            (f || ec >= 2) ? (cout << 0 << endl) : (((ec & 1) || t) ? cout << 1 << endl : cout << 2 << endl);
        }
    }
}