#include <iostream>
#include <vector>
#include<algorithm>
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
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        sort(nums.begin(), nums.end());
        int a = -1, b = -1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                a = i;
                break;
            }
        }
        if(a == -1) {
            cout << "-1" << endl;
            continue;
        }
        b = nums.size() - a;
        cout << a << ' ' << b << endl;
        for(int i = 0; i < a; i++) 
            cout << nums[i] << ' ';
        cout << endl;
        for(int i = a; i < nums.size(); i++) {
            cout << nums[i];
            if(i < nums.size() - 1) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}