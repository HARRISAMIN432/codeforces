#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
            if (b[i] < p)
                v.push_back({b[i], a[i]});
        sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first > b.first; });
        long long ans = 0, td = 0, cost = 0, pp = 0;
        while (n > 0 && v.size() > 0)
        {
            if (td == 0 && v.size() > 0)
            {
                pp = v[v.size() - 1].second, td += pp, cost = v[v.size() - 1].first, ans += p, n--;
                v.pop_back();
                if (n >= pp)
                {
                    ans += pp * cost;
                    n -= pp;
                }
                else
                {
                    ans += (n * cost);
                    n = 0;
                }
            }
            while (n > 0 && td && v.size() > 0)
            {
                pp = v[v.size() - 1].second, td += pp, cost = v[v.size() - 1].first;
                v.pop_back();
                if (n >= pp)
                {
                    ans += pp * cost;
                    n -= pp;
                }
                else
                {
                    ans += (n * cost);
                    n = 0;
                }
                td--;
            }
        }
        if (n)
            ans += (n * p);
        cout << ans << endl;
    }
}