#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int n = nums.size();
    vector<int> arr(n, 0);
    vector<int> brr(n, 0);

    arr[0] = nums[0];
    brr[n - 1] = nums[n - 1];
    for (int i = 1; i < n; i++)
    {
        arr[i] = nums[i] + arr[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        brr[i] = nums[i] + brr[i + 1];
    }
    print(nums);
    print(arr);
    print(brr);

    return 0;
}