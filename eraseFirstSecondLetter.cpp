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
        vector<bool> freq(26, 0);
        for (char c : s)
            freq[c - 'a'] = 1;
        int ans = 0;
        for (int i = 0; i < n; i++)
            if (freq[s[i] - 'a'])
            {
                freq[s[i] - 'a'] = 0;
                ans += n - i;
            }
        cout << ans << endl;
    }
}