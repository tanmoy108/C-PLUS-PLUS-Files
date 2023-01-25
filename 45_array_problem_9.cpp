/*
45. Transpose matrix
Given a square matrix A & its number of rows (or columns) N, return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

Constraints: 1<=N<=1000
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<3;i++)
    {
        for(int j =i;j<3;j++)
        {
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }

    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
