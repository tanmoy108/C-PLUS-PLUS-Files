//number searching in array by binary search
//complexity = O(log2n)

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while(s<=e)
    {
        int m = (s+e)/2;

        if(arr[m] > key)
        {
            e=m-1;
        }
        else if(arr[m] < key)
        {
            s = m+1;
        }
        else if(arr[m]==key)
        {
            return m;
        }
    }
    return -1;

}

int main()
{
    int arr[]={18,12,20,42,8,24,33,22};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int temp;
    int key = 20;
    //sorting start
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
    //sorting end
    //arr[] = {8,12,18,20,22,24,33,42} -> new array
    cout<< binarySearch(arr,n,key);

}
