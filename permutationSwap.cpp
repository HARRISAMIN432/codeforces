#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

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
        int hcf = 0;
        for (int i = 0; i < n; i++)
            hcf = gcd(hcf, abs(nums[i] - (i + 1)));
        cout << hcf << endl;
    }
}