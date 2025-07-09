#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int j = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > q)
            {
                if (i - j >= k)
                    ans += (((i - j - k + 1) * (i - j - k + 2)) / 2);
                j = i + 1;
            }
        }
        if (nums.size() - j >= k)
            ans += (((nums.size() - j - k + 1) * (nums.size() - j - k + 2)) / 2);
        cout << ans << endl;
    }
}