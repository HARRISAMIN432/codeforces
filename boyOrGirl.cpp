#include <iostream>
#include <vector>
#include <set>
using namespace std;

main()
{
    string s;
    cin >> s;
    set<char> set;
    for (char c : s)
        set.insert(c);
    (set.size() & 1) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
}