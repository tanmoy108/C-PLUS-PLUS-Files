/* 43. Pair sum problem
check if there exists two elements in an array such that their sum is equal to given k */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,4,7,11,14,16,20,21},k=36,i=0; // array must be sorted
    int n =sizeof(arr)/sizeof(arr[0]);
    int l =i,h=n-1;//l=0 h=7
    while(l<h)
    {
        if(arr[l]+arr[h] > k)
        {
            h -= 1;
        }
        else if(arr[l]+arr[h] < k)
        {
            l += 1;
        }
        else
        {
            cout<<arr[l]<<" "<<arr[h];
            break;
        }
    }
}
