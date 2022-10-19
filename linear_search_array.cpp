//number searching in array by linear search
//complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12,18,20,42,8,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 8;
    for(int i=0;i<n;i++)
    {
        if(key == arr[i])
        {
            cout<<i+1;
            break;
        }
        else if(i==n-1 && key != arr[i])
        {
            cout<< -1;
        }
    }

}
