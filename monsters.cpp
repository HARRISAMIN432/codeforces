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
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        if (nums.size() == 1)
        {
            cout << 1 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] %= k;
            if (nums[i] == 0)
                nums[i] = k;
        }
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            v[i] = {nums[i], i};
        sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first; });
        for (int i = 0; i < n; i++)
        {
            cout << v[i].second + 1;
            if (i < nums.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
}