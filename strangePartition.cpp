#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        long long xans = 0, nans = 0;
        for (int i = 0; i < n; i++)
            xans += (nums[i] + x - 1) / x;
        for (int i = 0; i < n; i++)
            nans += nums[i];
        cout << (nans + x - 1) / x << " " << xans << endl;
    }
    return 0;
}