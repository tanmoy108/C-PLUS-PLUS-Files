/* Max still i
Given an array arr[] of size n. For every i from 0 to n-1 output max (arr[0],arr[1],....,arr[i])
example:
arr[] =      {1,0,5,4,6,8}
max still i = 1 1 5 5 6 8
*/

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

//another way......................................

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {5,-4,8,14,6,28};
    int n = (sizeof(arr)/sizeof(arr[0]));//8
    int maxi = arr[0]; // 2
    cout<<maxi<<" ";//2
    for(int i =1; i<n; i++)//i = 1 2 3 4 5 6 7
    {
        int j = i-1;//j = 0
        if(maxi<arr[i])//11 < 18 arr[3]
        {
            maxi = arr[i];//maxi = 18
        }
        cout<<maxi<<" ";// 11 11 18
    }


}
