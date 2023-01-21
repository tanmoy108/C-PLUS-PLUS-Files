/*
40.
Problem:
Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S

Consstraints:
1<= N <=10^5
0<= Ai <=10^10

Example:
Input:
N=5, S=12
A[] = {1,2,3,7,5}

Output: 2 4

Explanation: The sum of elements from 2nd position to 4th position is 12.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,g;
    cin>>n>>g;//5 12
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];//1 2 3 7 5
    }
    int s=0,e=0,st=-1,en=-1,sum=0;
    while(e<n && sum+arr[e]<=g)//3<5 && 6+7<=12
    {
        sum+=arr[e];//3+3=6
        e++;//3
    }
    //sum=6 n=5 e=3 s=0   1 2 3 7 5
    if(sum == g)
    {
        cout<<s+1<<" "<<e+1<<endl;
        return 0;
    }

    while(e<n)//3<5
    {
        sum+=arr[e];//6+7=13
        while(sum>g) // 13>12
        {
            sum-=arr[s];//13-1=12;
            s++;//1
        }
        //s=1 sum=12 e=3
        if(sum == g)
        {
            st = s+1;
            en = e+1;
            break;
        }

        e++;

    }

    cout<<st<<" "<<en<<endl;

}
