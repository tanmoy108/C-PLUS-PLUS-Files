/*subarray: a continuous part of an array. such as [1,2,3,4,5,6] is an array . 
each elements are subarray. so subarray of this array is : [2,3,4,5] number of subarray of an array with n elements=nC2+n=n*(n+1)/2..

subsequence: a subsequence is a sequence that can be derived an array by selecting zero or more elements, 
without changing the order of the remaining elements. 
[1,2,3,4,5,6,7] => subsequence is [2,4,6]  number of subsequence of an array with n elements= 2^n.
every subarray is subsequence but every subsequence is not subarray..*/



//Give an array a[ ] of size n. Output sum of all subarray of the given array. example:
//{1,2,2} =>subarray=> 1 (sum =1), 1 2 (sum=3), 1 2 2 (sum=5), 2 (sum=2), 2 2 (sum=4), 2(sum=2)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = (sizeof(arr) / sizeof(arr[0]));
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i, k = i + 1; k < n; k++)
        {
            //cout<<arr[j]<<" " << arr[k]<<endl;
            // sum += arr[j]+arr[k];
            for (int l = j; l <= k; l++)
            {
                sum = sum + arr[l];
            }
        }
    }

    cout << sum;
    return 0;
}

// ............ another way .............................

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {1,2,2},sum=0;
    int n = (sizeof(arr)/sizeof(arr[0]));

    for (int i=0;i<n;i++)//start point
    {
        for(int j=i;j<n;j++) // end point
        {
            for(int k = i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            cout<<"sum : "<<sum;
            cout<<endl;
            sum = 0;
        }
    }
}

