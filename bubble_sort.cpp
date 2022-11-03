//bubble sort
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12,45,23,51,19,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int i=0,j=i+1 ; i<n-1; i++,j++)
    {
        if(arr[i]>arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }

}
