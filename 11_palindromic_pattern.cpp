// 11. palindromic pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row: ";
    cin>>row;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        for(int k =i ; k>=1; k--)
        {
            cout<<k<<" ";
        }
        for(int l =1 ; l<=i; l++)
        {
            if(l==1)
            {
                continue;
            }
            cout<<l<<" ";
        }
        cout<<endl;
    }
}

.....................................another way ...........................................

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row: ";
    cin>>row;
    for(int i=1; i<=row; i++)
    {
        int j;
        for(j=1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        int k =i;
        for(;j<=row;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=row+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}

---------------------------anothery way ---------------------------------
    
 #include<bits/stdc++.h>
using namespace std;
int main()
{
     int row,doub;
     cout<<"row: ";
     cin>>row; //4
     for(int i= 1;i<=row;i++)
     {
         for(int j=1;j<=row-i;j++)
         {
             cout<<" ";
         }
         //int k;
         for(int k=i;k>=1;k--)
         {
             cout<<k;
         }
         for(int k=2;k<=i;k++)
         {
             cout<<k;
         }
         for(int j=1;j<=row-i;j++)
         {
             cout<<" ";
         }

         cout<<endl;
     }
}

