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
        bool allSame = true;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (i > 0 && nums[i] != nums[i - 1])
                allSame = false;
        }
        if (allSame)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            sort(nums.rbegin(), nums.rend());
            cout << nums[0] << ' ' << nums[nums.size() - 1];
            if (n > 2)
                cout << " ";
            for (int i = 1; i < n - 1; i++)
            {
                cout << nums[i];
                if (i < n - 2)
                    cout << ' ';
            }
            cout << endl;
        }
    }
}