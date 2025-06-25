#include <iostream>
#include <vector>
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
        (n & 1) ? cout << 4 << "\n1" << " " << n - 1 << "\n1" << " " << n - 1 << "\n"
                       << n - 1 << " " << n << "\n"
                       << n - 1 << " " << n << endl
                : cout << 2 << "\n1" << " " << n << "\n1" << " " << n << endl;
    }
    return 0;
}