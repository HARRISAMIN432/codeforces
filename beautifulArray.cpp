
// . An array x1,x2,…,xm
// is beautiful if there exists an array y1,y2,…,ym
// such that the elements of y
// are distinct (in other words, yi≠yj
// for all 1≤i<j≤m
// ), and the product of xi
// and yi
// is the same for all 1≤i≤m
// (in other words, xi⋅yi=xj⋅yj
// for all 1≤i<j≤m
// ).

// Your task is to determine the maximum size of a subsequence∗
// of array a
// that is beautiful.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        set<int> s;
        for (int i = 0; i < n; i++)
            s.insert(nums[i]);
        cout << s.size() << endl;
    }
}