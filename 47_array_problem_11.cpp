/*
47. 2D Matrix Search

Given a n X m matrix.
Write an algorithm to find that the given values exists in the matrix or not.
Integers in each row are sorted in ascending from left to right .
Integers in each column are sorted in ascending from top to bottom.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,k=20;
    cin>>n1>>n2;
    int arr[n1][n2];
    bool check = true;

    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            cin>>arr[i][j];
    }
    int r = 0,c=n2-1;//0 3

    while(c>=0 && r<n1)
    {
        if(arr[r][c] == k)
        {
            cout<<"found";
            check = false;
            break;

        }
        else if(arr[r][c]>k)
        {
            c--;
        }
        else
            r++;
    }

    if(check)
    {
        cout<<"not found";
    }

}
