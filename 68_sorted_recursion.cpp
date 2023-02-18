/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-18-14.43.38
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//69. Check if an array is sorted or not
#include<bits/stdc++.h>
using namespace std;

bool sortedRecursion(int arr[] , int n)
{
    if(n == 1)
    {
        return true;
    }
    bool sortedArray = sortedRecursion(arr+1,n-1);
    return (arr[0]<arr[1] && sortedArray);
}

int main()
{
    int arr[] = {2,4,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool a = sortedRecursion(arr,n);
    if(a)
    {
        cout<<"Sorted";
    }
    else
        cout<<"Not Sorted";
    return 0;
}
