//36. Subarray

/*
subarray: a continuous part of an array. such as [1,2,3,4,5,6] is an array . 
each elements are subarray. so subarray of this array is : [2,3,4,5] number of subarray of an array with n elements=nC2+n=n*(n+1)/2..
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {5,4,8,14,6,28},m=0;
    int n = (sizeof(arr)/sizeof(arr[0]));

    for (int i=0;i<n;i++)//start point
    {
        for(int j=i;j<n;j++) // end point
        {
            for(int k = i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            m++;
            cout<<endl;
        }
    }
    cout<<"number of sub array: "<<m<<endl;

    cout<<"another way to find number of sub array: " <<(n*(n+1))/2;
}
