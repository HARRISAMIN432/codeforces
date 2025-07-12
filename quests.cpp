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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int maxi = b[0];
        int ans = 0, sum = 0;
        for (int i = 0; i < n && i < k; i++)
        {
            sum += a[i];
            maxi = max(maxi, b[i]);
            ans = max(ans, sum + (maxi * (k - i - 1)));
        }
        cout << ans << endl;
    }
}