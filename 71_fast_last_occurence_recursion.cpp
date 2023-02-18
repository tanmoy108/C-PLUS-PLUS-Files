/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-18-17.37.57
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//71.Find the first and last occurence of a number in an array
#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(int arr[],int n,int i,int j)
{
    if(i == n)
    {
        return -1;
    }
    int a = lastOccurrence(arr,n,i+1,j);

    //cout<<a<<" ";
    if(a != -1)
    {
        return a;
    }
    if(arr[i] == j)
    {
        return i;
    }
    return -1;
}

int firstOccurrence(int arr[],int n, int i, int j)
{
    if(i == n)
    {
        return -1;
    }
    if(arr[i] == j)
    {
        return i;
    }
    firstOccurrence(arr,n,i+1,j);
}

int main()
{
    int arr[] = {3,4,2,5,2,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<firstOccurrence(arr,n,0,2)<<" ";
    cout<<lastOccurrence(arr,n,0,2);
    return 0;
}
