#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

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
        if (n == 2)
        {
            cout << "Yes" << endl;
            continue;
        }
        unordered_map<int, int> m;
        for (int num : nums)
            m[num]++;
        if (m.size() > 2)
        {
            cout << "No" << endl;
            continue;
        }
        if (m.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        int a = 0, b = 0, i = 0;
        for (auto &[key, value] : m)
            (!i++) ? a = value : b = value;
        (abs(a - b) < 2) ? cout << "Yes" << endl : cout << "No" << endl;
    }
}