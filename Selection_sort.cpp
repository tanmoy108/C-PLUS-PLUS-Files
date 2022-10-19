//Selection sort in array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={16,11,23,22,51,34,73,2};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
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
