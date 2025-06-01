#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        while (s.length() > 1 && s[0] == '0')
            s.erase(0, 1);
        int n = stoi(s);
        int root = sqrt(n);
        (n == root * root) ? cout << root << " " << 0 : cout << "-1";
        cout << endl;
    }
}