//half pyramid 180 degree rotation:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row : ";
    cin>> row;

    for(int i=row;i>=1;i--) //row = 3 i = 3 3>=1
    {
        for(int j=1;j<=row;j++) // j = 1  1<=5
        {
            if(j>=i) //1>=3
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
