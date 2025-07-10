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
        sort(nums.rbegin(), nums.rend());
        cout << nums[0];
        for (int i = 1; i < n; i++)
            cout << " " << nums[i];
        cout << endl;
    }
}