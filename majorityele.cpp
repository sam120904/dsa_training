#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{2,2,1,1,1,2,2};
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int freq = count(v.begin(), v.end(), v[i]);

        if (freq > n / 2)
        {
            cout << "Majority element: " << v[i];
            return 0;
        }
    }

    cout << "No majority element";
    return 0;
}