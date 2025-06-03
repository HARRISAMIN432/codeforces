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
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        if (isSorted(nums))
        {
            cout << "Yes" << endl;
            continue;
        }
        bool swap = true;
        while (swap)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                {
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                    swap = false;
                }
            }
            if (!swap)
                swap = true;
            else
                break;
        }
        if (isSorted(nums))
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
}