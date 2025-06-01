#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

main()
{
    string s1, s2;
    cin >> s1 >> s2;
    std::transform(s1.begin(), s1.end(), s1.begin(),
                   [](unsigned char c)
                   { return std::tolower(c); });
    std::transform(s2.begin(), s2.end(), s2.begin(),
                   [](unsigned char c)
                   { return std::tolower(c); });
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] > s2[i])
        {
            cout << "1" << endl;
            return 0;
        }
        else if (s1[i] < s2[i])
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
}