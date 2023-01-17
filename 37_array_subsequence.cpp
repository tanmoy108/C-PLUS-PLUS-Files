/*
37. subsequence

subsequence: a subsequence is a sequence that can be derived an array by selecting zero or more elements, 
without changing the order of the remaining elements. 
[1,2,3,4,5,6,7] => subsequence is [2,4,6]  number of subsequence of an array with n elements= 2^n.
every subarray is subsequence but every subsequence is not subarray..
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {5,4,8,14,6,28},m=1;
    int n = (sizeof(arr)/sizeof(arr[0]));
    int s = pow(2,n);

    for(int i = 1 ; i<s;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        ++m;
            cout<<endl;
    }
    cout<<"number of subsequence : " << m<<endl;
    cout<<"another method to find number of subsequence : " << s;
}
