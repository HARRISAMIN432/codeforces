#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string num = to_string(n);
        int ans = 20, pos22 = -1, pos5 = -1, pos27 = -1, pos25 = -1, pos0 = -1, pos02 = -1, ac5 = 21, ac0 = 21;
        for (int i = num.size() - 1; i >= 0; i--)
            if (num[i] == '5')
            {
                pos5 = num.size() - 1;
                ac5 = i;
                break;
            }
        for (int i = ac5 - 1; i >= 0; i--)
            if (num[i] == '2')
            {
                pos22 = i;
                break;
            }
        for (int i = ac5 - 1; i >= 0; i--)
            if (num[i] == '7')
            {
                pos27 = i;
                break;
            }
        for (int i = num.size() - 1; i >= 0; i--)
            if (num[i] == '0')
            {
                pos0 = num.size() - 1;
                ac0 = i;
                break;
            }
        for (int i = ac0 - 1; i >= 0; i--)
            if (num[i] == '0')
            {
                pos02 = i;
                break;
            }
        for (int i = ac0 - 1; i >= 0; i--)
            if (num[i] == '5')
            {
                pos25 = i;
                break;
            }
        if (pos5 != -1 && pos22 != -1)
            ans = pos5 - pos22 - 1;
        if (pos0 != -1 && pos02 != -1)
            ans = min(ans, pos0 - pos02 - 1);
        if (pos5 != -1 && pos27 != -1)
            ans = min(ans, pos5 - pos27 - 1);
        if (pos0 != -1 && pos25 != -1)
            ans = min(ans, pos0 - pos25 - 1);
        cout << ans << endl;
    }
    return 0;
}