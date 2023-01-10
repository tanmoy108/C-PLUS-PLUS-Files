//2. inverted half pyramid pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int row,doub;
     cout<<"row: ";
     cin>>row; //4
     for(int i=row;i>=1;i--)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<"*"<<" ";
         }
         cout<<endl;
     }
}
