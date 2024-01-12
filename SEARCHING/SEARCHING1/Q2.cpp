
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Given a sorted binary array, efficiently count the total number of 1’s in it.
    // Input 1 : a = [0,0,0,0,1,1]
    // Output 1: 2
    int arr[] = {0, 0, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1)
        {
            // ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout<<n-low;

    return 0;
}
