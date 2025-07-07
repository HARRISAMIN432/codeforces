#include <iostream>
#include <unordered_set>
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
        string s;
        cin >> s;
        unordered_set<char> p;
        unordered_set<char> su;
        vector<int> pre(n, 0), suff(n, 0);
        pre[0] = 1, suff[n - 1] = 1;
        p.insert(s[0]);
        su.insert(s[n - 1]);
        for (int i = 1; i < n; i++)
            if (p.find(s[i]) != p.end())
                pre[i] = pre[i - 1];
            else
            {
                pre[i] = pre[i - 1] + 1;
                p.insert(s[i]);
            }
        for (int i = n - 2; i >= 0; i--)
            if (su.find(s[i]) != su.end())
                suff[i] = suff[i + 1];
            else
            {
                suff[i] = suff[i + 1] + 1;
                su.insert(s[i]);
            }
        int maxi = 1;
        for (int i = 0; i < n - 1; i++)
            maxi = max(maxi, pre[i] + suff[i + 1]);
        cout << maxi << endl;
    }
}