#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        int arr[26] = {0};
        for (char c : s)
            arr[c - 'a']++;
        int even = 0, odd = 0;
        for (int i = 0; i < 26; i++)
            (arr[i] & 1) ? odd++ : even++;
        if ((n - k) & 1)
        {
            if (odd == 0)
            {
                std::cout << ((k & 1) ? "YES" : "NO") << std::endl;
                continue;
            }
            if (k >= odd)
            {
                k = k - odd + 1;
                odd = 1;
            }
            else
            {
                odd -= k;
                k = 0;
            }
            (odd > 1) ? std::cout << "NO" << std::endl : (std::cout << ((k & 1) ? "NO" : "YES") << std::endl);
        }
        else
        {
            if (odd == 0)
            {
                std::cout << ((k & 1) ? "NO" : "YES") << std::endl;
                continue;
            }
            if (k >= odd)
            {
                k = k - odd;
                odd = 0;
            }
            else
            {
                odd = odd - k;
                k = 0;
            }
            (odd > 0) ? std::cout << "NO" << std::endl : (std::cout << ((k & 1) ? "NO" : "YES") << std::endl);
        }
    }
}