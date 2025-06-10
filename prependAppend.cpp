#include <iostream>
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
        int left = 0, right = n - 1;
        while (s[left] != s[right] && n > 1)
        {
            left++, right--;
            n -= 2;
        }
        cout << n << endl;
    }
}