//butterfly pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int row,doub;
     cout<<"row: ";
     cin>>row; //4
     doub = row*2;

     for(int i=1;i<=row;i++) // i=1 1<=4
     {
         for(int j=1;j<=doub;j++) //j=1 1<=8
         {
             if(j<=i || j>=doub-i+1) // 1<=3  1>=8-1+1
             {
                 cout<<"*";
             }
             else
                cout<<" ";
         }
         cout<<endl;
     }
     for(int i=row;i>=1;i--) // i=1 1<=4
     {
         for(int j=doub;j>=1;j--) //j=1 1<=8
         {
             if(j<=i || j>=doub-i+1) // 1<=3  1>=8-1+1
             {
                 cout<<"*";
             }
             else
                cout<<" ";
         }
         cout<<endl;
     }
}
