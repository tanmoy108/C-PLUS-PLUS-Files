/*
46. matrix multiplication

Problem:
Given two 2-Dimensional arrays of sizes n1 X n2 and n2 X n3. Your task is to multiply these matrices and output the multiplied matrix.

Constraints:
1<=n1, n2, n3 <= 300
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n1,n2,n3;
   cin>>n1>>n2>>n3;

   int arr[n1][n2];
   int arr2[n2][n3];
   int arr3[n1][n3];

   for(int i = 0;i<n1;i++)
   {
       for(int j =0;j<n2;j++)
        cin>>arr[i][j];
   }

   for(int i = 0;i<n2;i++)
   {
       for(int j =0;j<n3;j++)
        cin>>arr2[i][j];
   }

   for(int i = 0;i<n1;i++)
   {
       for(int j =0;j<n3;j++)
        arr3[i][j] = 0;
   }

   for(int i =0;i<n1;i++)
   {
       for(int j=0;j<n3;j++)
       {
           for(int k=0;k<n2;k++)
           {
               arr3[i][j] += arr[i][k] * arr2[k][j];
           }
       }
   }

   for(int i=0;i<n1;i++)
   {
       for(int j=0;j<n3;j++)
       {
           cout<<arr3[i][j]<<" ";
       }
       cout<<endl;
   }

}
