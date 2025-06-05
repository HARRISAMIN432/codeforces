#include <iostream>
#include <vector>
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
        bool matched = false;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] == k)
                matched = true;
        }
        if (!matched)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}