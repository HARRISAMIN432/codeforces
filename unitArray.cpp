#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int minus1Count = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == -1)
                minus1Count++;
        }
        int ans = 0;
        if (minus1Count > floor(n / 2.0))
        {
            ans += minus1Count - floor(n / 2.0);
            minus1Count = n / 2;
        }
        if (minus1Count & 1)
            ans += 1;
        cout << ans << endl;
    }
    return 0;
}