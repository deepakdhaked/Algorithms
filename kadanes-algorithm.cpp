#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int> &v)
{
    int sum = 0;
    int maxi = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        maxi = max(maxi, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max SubArray Sum is : " << maxSubArraySum(v) << endl;
}