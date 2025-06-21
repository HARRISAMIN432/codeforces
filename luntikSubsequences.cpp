#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        int numberOfOnes = 0, sum = 0, numberOfZeroes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] == 1)
                numberOfOnes++;
            else if (nums[i] == 0)
                numberOfZeroes++;
            sum += nums[i];
        }
        (numberOfOnes == 0) ? cout << 0 << endl : cout << 1LL * numberOfOnes * (1LL << numberOfZeroes) << endl;
        ;
    }
    return 0;
}