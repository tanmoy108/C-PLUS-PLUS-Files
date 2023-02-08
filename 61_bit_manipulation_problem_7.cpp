/* SOURCE HEADER
****************************************************************
   Date: Wednesday 2023-02-08-12.25.43
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//61. write a program to generate all possible subset of a set {a,b,c}
#include<bits/stdc++.h>
using namespace std;

void subset(int arr[], int n)
{
    for(int i=0;i<(1<<n);i++)//2^n = 2^4 = 16 => 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n=4;
    int arr[n] = {1,3,6,9};
    subset(arr,n);
    return 0;
}
