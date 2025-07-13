#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;
        vector<int> nums(n);
        int maxA = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            maxA = max(maxA, nums[i]);
        }
        long long left = 1, right = maxA + x, ans = 1;
        while (left <= right)
        {
            long long mid = (left + right) / 2;
            long long temp = 0;
            for (int i = 0; i < n; i++)
                if (mid > nums[i])
                    temp += (mid - nums[i]);
            if (temp <= x)
            {
                ans = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        cout << ans << "\n";
    }
}
