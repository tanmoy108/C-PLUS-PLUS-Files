//Given an array arr[] of size n. For every i form 0 to n-1 output max (arr[0],arr[1],....,arr[i])

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,-4,8,14,6,28};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int max =arr[0];

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(max < arr[j])
            {
                max = arr[j];
            }
        }
        cout<<max <<" ";
    }

}

//2nd method

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,-4,8,14,6,28};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int mx =-1999999;

    for(int i =0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout<< mx<<" ";    
    }

}
