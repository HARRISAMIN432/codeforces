#include <iostream>
#include <vector>
#include <cmath>
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
        bool sorted = true;
        int minDifference = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < nums[i - 1])
            {
                sorted = false;
                break;
            }
            minDifference = min(minDifference, nums[i] - nums[i - 1]);
        }
        if (!sorted)
        {
            cout << 0 << endl;
            continue;
        }
        if (minDifference == 0)
        {
            cout << 1 << endl;
            continue;
        }
        (minDifference <= 2) ? cout << minDifference << endl : cout << (minDifference / 2) + 1 << endl;
    }
    return 0;
}