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
        int maxi = nums[0];
        for (int i = 1; i < nums.size(); i++)
            maxi = max(maxi, nums[i] - nums[i - 1]);
        maxi = max(maxi, (x - nums[nums.size() - 1]) << 1);
        cout << maxi << endl;
    }
}