//12. star pattern

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
            cout<<"* ";
        }
        for(int l =1 ; l<=i; l++)
        {
            if(l==1)
            {
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=row; i>=1; i--)
    {
        for(int j=1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        for(int k =i ; k>=1; k--)
        {
            cout<<"* ";
        }
        for(int l =1 ; l<=i; l++)
        {
            if(l==1)
            {
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}
