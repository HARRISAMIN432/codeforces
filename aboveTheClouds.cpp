#include <iostream>
#include <string>
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
        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;
        bool isYes = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (freq[s[i] - 'a'] > 1)
            {
                isYes = true;
                break;
            }
        }
        (isYes) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}