#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = 0, x = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            total++;
            (num == 0) ? zeroes++ : x = x ^ num;
        }
        (x == 0) ? (cout << 0 << endl) : ((n % 2 == 0) ? cout << -1 << endl : cout << x << endl);
    }
}