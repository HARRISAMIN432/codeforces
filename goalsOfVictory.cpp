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
        n--;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += num;
        }
        (sum == 0) ? cout << 0 << endl : cout << (-1 * sum) << endl;
    }
}