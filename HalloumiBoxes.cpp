#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &nums)
{
    bool sorted = true;
    for (int i = 1; i < nums.size(); i++)
        if (nums[i] < nums[i - 1])
        {
            sorted = false;
            break;
        }
    return sorted;
}

main()
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
        if (k == 1 && !isSorted(nums))
        {
            cout << "No" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}