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
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int mini = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[maxi])
                maxi = i;
            if (nums[i] < nums[mini])
                mini = i;
        }
        int ans = nums[maxi] - nums[0];
        for (int i = 1; i < n; i++)
            ans = max(ans, nums[i - 1] - nums[i]);
        ans = max(ans, nums[n - 1] - nums[mini]);
        cout << ans << endl;
    }
    return 0;
}