/*
39.(amazon,oracle)
Problem:
Given an array arr[] of size N. The task is to find the first repeating element in the array of integers i.e., an element that occurs more than once and whose index of first occurence is smallest.

Constraints:
1<=N<=10^6
0<=Ai<=10^6

Example:
input:
7
1 5 3 4 3 5 6

output:
2

Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first occuring index in 3.

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+123;//100000123
int arr[N];
int cnt[N];
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n; i++)
    {
        cin>>arr[i];// 1 3 5 2 3 5 6
    }


    for(int i=0; i<N; i++)
    {
        cnt[i] = -1;//-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    }
    int minIndex = INT_MAX;

    for(int i = 0;i<n;i++)
    {
        if(cnt[arr[i]]!= -1)
        {
            minIndex = min(minIndex,cnt[arr[i]]);
        }
        else
        {
            cnt[arr[i]] = i ;
        }
    }

    if(minIndex == INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<minIndex+1<<endl;
    }

}
