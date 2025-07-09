#include <iostream>
#include <vector>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int ans = 0, minDiff = x * 2, j = 1, maxi = nums[0], mini = nums[0];
        while (j < n)
            (abs(nums[j] - mini) > minDiff || abs(nums[j] - maxi) > minDiff) ? ans++,
                mini = nums[j], maxi = nums[j], j++ : mini = min(nums[j], mini), maxi = max(nums[j], maxi), j++;
        cout << ans << endl;
    }
}