#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> calcDiv(int n)
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i != n / i)
                ans.push_back(n / i);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + a[i];
        vector<int> divisors = calcDiv(n);
        long long ans = 0;
        for (int d : divisors)
        {
            if (d == n)
                continue;
            long long maxSum = LLONG_MIN, minSum = LLONG_MAX;
            for (int i = 0; i < n; i += d)
            {
                long long tempSum = prefix[i + d] - prefix[i];
                maxSum = max(maxSum, tempSum);
                minSum = min(minSum, tempSum);
            }
            ans = max(ans, maxSum - minSum);
        }
        cout << ans << '\n';
    }
}
