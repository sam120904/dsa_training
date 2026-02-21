#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {5, 7, 10, 23, 66};
    int prefix_sum[5];

    prefix_sum[0] = arr1[0];

    for(int i = 1; i < 5; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr1[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}
