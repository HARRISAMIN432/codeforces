#include <iostream>

using namespace std;

main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            x++;
        }
        else if (s == "--X" || s == "X--")
        {
            x--;
        }
    }
    cout << x << endl;
}