#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        (abs(a - b) > 0) ? ((a > b) ? std::cout << "First" << std::endl : std::cout << "Second" << std::endl) : ((c % 2) ? std::cout << "First" << std::endl : std::cout << "Second" << std::endl);
    }
    return 0;
}