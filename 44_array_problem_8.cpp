/*
44. Spiral order matrix traversal
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int r_start = 0 , r_end = r-1, c_start = 0, c_end = c-1;

    while ( r_start <= r_end && c_start <= c_end)
    {
        //row start
        for(int i =c_start; i<=c_end;i++)
        {
            cout<<arr[r_start][i]<<" ";
        }
        r_start++;

        //column end
        for(int j=r_start;j<=r_end;j++)
        {
            cout<<arr[j][c_end]<<" ";
        }
        c_end--;

        //row end
        for(int i=c_end;i>=c_start;i--)
        {
            cout<<arr[r_end][i]<<" ";
        }
        r_end--;

        //column start
        for(int j=r_end;j>=r_start;j--)
        {
            cout << arr[j][c_start] << " ";
        }
        c_start++;
    }
}
