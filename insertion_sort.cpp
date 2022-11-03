//insertion sort
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12,45,23,51,19,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }

}
