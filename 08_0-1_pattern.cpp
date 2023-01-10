//8. 0-1 pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row: ";
    cin>>row; //4
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<1;
                }
                else
                    cout<<0;
            }
            else
            {
                if(j%2==0)
                {
                    cout<<0;
                }
                else
                    cout<<1;
            }
        }
        cout<<endl;
    }
}

---------------------------another way -----------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row: ";
    cin>>row; //4
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                cout<<1;
            }
            else
                cout<<0;
        }
        cout<<endl;
    }
}
