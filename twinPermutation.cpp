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
        vector<int> desc = nums;
        sort(desc.rbegin(), desc.rend());
        for (int i = 0; i < n; i++)
        {
            cout << desc[nums[i] - 1];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}