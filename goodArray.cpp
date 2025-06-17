#include <iostream>
#include <vector>
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
        int ans = 0, j = 0;
        bool startTracking = false;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] % 2 == nums[i - 1] % 2)
                startTracking = true;
            else if (nums[i] % 2 != nums[i - 1] % 2)
            {
                startTracking = false;
                ans += i - j - 1;
            }
            if (!startTracking)
                j = i;
        }
        cout << ans + (nums.size() - j - 1) << endl;
    }
    return 0;
}