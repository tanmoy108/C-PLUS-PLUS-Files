/*
41.
Problem:
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Constraints:
1<=N<=10^6
-10^6 <= Ai <= 10^6

Example:
input: 
6
0 -9 1 3 -4 5

output:2
(first positive missing number)

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+123;
int arr[N];
int cnt[N];
int main()
{
    int n,a=INT_MAX,b=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        cnt[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            a = min(a,i);
            b = max(b,i);
            cnt[arr[i]]=1;
        }
    }
    for(int i = a;i<=b;i++)
    {
        if(cnt[i]!=1)
        {
            cout<<i;
            break;
        }
    }

}
