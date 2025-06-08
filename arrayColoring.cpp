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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += num;
        }
        (sum & 1) ? cout << "No" << endl : cout << "Yes" << endl;
    }
}