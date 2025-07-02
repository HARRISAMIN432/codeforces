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
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        (k > 1) ? cout << "YES" << endl : (nums[j - 1] == *max_element(nums.begin(), nums.end())) ? cout << "YES" << endl
                                                                                                  : cout << "NO" << endl;
    }
    return 0;
}