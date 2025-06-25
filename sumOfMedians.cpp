#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> nums(n * k);
        for (int i = 0; i < n * k; i++)
            cin >> nums[i];
        long long ans = 0;
        if (n == 1)
        {
            for (int num : nums)
                ans += num;
        }
        else
        {
            int left = 0, right = n * k - 1;
            while (left < right)
            {
                ans += nums[right - n / 2];
                left += (n & 1) ? n / 2 : n / 2 - 1;
                right = right - n / 2 - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
