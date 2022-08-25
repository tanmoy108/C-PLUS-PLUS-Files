//zig-zag pattern 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row: ";
    cin>>row;
    for(int i=1; i<=3; i++)
    {
        for(int j=1;j<=row;j++)
        {
            if((i+j) % 4 ==0)
            {
                cout<<"* ";
            }
            else if(i==2 && j%4 == 0)
            {
                cout<<"* ";
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
