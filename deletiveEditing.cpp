#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        vector<vector<int>> idx(26);
        vector<int> freqt(26, 0);
        for (char c : t)
            freqt[c - 'A']++;
        for (int i = s.size() - 1; i >= 0; i--)
            if (idx[s[i] - 'A'].size() < freqt[s[i] - 'A'])
                idx[s[i] - 'A'].push_back(i);
        bool isNo = false;
        for (int i = 0; i < t.size(); i++)
            if (idx[t[i] - 'A'].size() < freqt[t[i] - 'A'])
            {
                isNo = true;
                break;
            }
        if (isNo)
        {
            cout << "NO" << endl;
            continue;
        }
        isNo = false;
        for (int i = 0; i < 26; i++)
            reverse(idx[i].begin(), idx[i].end());
        vector<int> iter(26, 0);
        int prev = idx[t[0] - 'A'][iter[t[0] - 'A']];
        iter[t[0] - 'A']++;
        for (int i = 1; i < t.size(); i++)
        {
            if (prev > idx[t[i] - 'A'][iter[t[i] - 'A']])
            {
                isNo = true;
                break;
            }
            prev = idx[t[i] - 'A'][iter[t[i] - 'A']];
            iter[t[i] - 'A']++;
        }
        (isNo) ? cout << "NO" << endl : cout << "YES" << endl;
    }
}