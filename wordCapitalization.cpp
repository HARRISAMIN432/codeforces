#include <iostream>
#include <vector>
#include <set>
using namespace std;

main()
{
    string s;
    cin >> s;
    if (s[0] > 90)
        s[0] -= 32;
    cout << s << endl;
}