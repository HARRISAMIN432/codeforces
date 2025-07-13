#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int temp = nums[0], l = 0, r = 1, ans = *max_element(nums.begin(), nums.end());
        while (r < n)
        {
            if (abs(nums[r] % 2) == abs(nums[r - 1] % 2) || temp <= 0)
            {
                ans = max(ans, temp);
                temp = nums[r];
                l = r;
                r++;
            }
            else
            {
                temp += nums[r];
                ans = max(temp, ans);
                r++;
            }
        }
        ans = max(temp, ans);
        cout << ans << endl;
    }
}