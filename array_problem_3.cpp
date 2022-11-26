//Give an array a[ ] of size n. Output sum of each subarray of the given array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,0,7,2};
    int n = (sizeof(arr) / sizeof(arr[0]));
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }

    return 0;
}
