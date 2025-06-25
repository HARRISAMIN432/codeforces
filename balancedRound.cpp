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
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        sort(nums.begin(), nums.end());
        long long left = 0, right = 1, ans = 0, temp = 0;
        while (right < nums.size())
        {
            while (right < nums.size() && nums[right] - nums[right - 1] <= k)
                right++;
            if (right - left > 1)
                ans = max(ans, right - left);
            left = right, right++;
        }
        if (ans == 0 && left != 0)
            cout << nums.size() - 1 << endl;
        else if (ans == 0)
            cout << 0 << endl;
        else
            cout << nums.size() - ans << endl;
    }
    return 0;
}