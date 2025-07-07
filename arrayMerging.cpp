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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        unordered_map<int, int> m1;
        unordered_map<int, int> t1;
        unordered_map<int, int> m2;
        unordered_map<int, int> t2;
        int prev1 = a[0], prev2 = b[0];
        t1[prev1] = 1, t2[prev2] = 1;
        for (int i = 1; i < n; i++)
        {
            if (prev1 == a[i])
                t1[a[i]]++;
            else
            {
                if (m1[prev1] < t1[prev1])
                    m1[prev1] = t1[prev1];
                prev1 = a[i];
                t1[a[i]] = 1;
            }
            if (prev2 == b[i])
                t2[b[i]]++;
            else
            {
                if (m2[prev2] < t2[prev2])
                    m2[prev2] = t2[prev2];
                prev2 = b[i];
                t2[b[i]] = 1;
            }
        }
        m1[prev1] = max(m1[prev1], t1[prev1]);
        m2[prev2] = max(m2[prev2], t2[prev2]);
        int maxi = 1;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, m1[a[i]] + m2[a[i]]);
            maxi = max(maxi, m1[b[i]] + m2[b[i]]);
        }
        cout << maxi << endl;
    }
}