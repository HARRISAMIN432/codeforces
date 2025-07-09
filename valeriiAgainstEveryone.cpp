#include <iostream>
#include <vector>
#include <unordered_map>
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
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            m[nums[i]]++;
        }
        bool found = false;
        for (auto it : m)
            if (it.second > 1)
            {
                found = true;
                break;
            }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}