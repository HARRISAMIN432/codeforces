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
        (n % 3) ? cout << "First" << endl : cout << "Second" << endl;
    }
}