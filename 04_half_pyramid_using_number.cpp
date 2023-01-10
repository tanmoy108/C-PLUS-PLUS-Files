// 4. half pyramid using number 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row : ";
    cin>> row;

    for(int i=1;i<=row;i++) //row = 5 i = 2 2<=5
    {
        for(int j=1;j<=row;j++) // j = 1  1<=5
        {
            if(j<=i) //1<=2
            {
                cout<<i;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

--------------------------------------------------- another way ------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"row : ";
    cin>> row;

    for(int i=1;i<=row;i++) //row = 5 i = 2 2<=5
    {
        for(int j=1;j<=i;j++) // j = 1  1<=5
        {
                cout<<i;
        }
        cout<<endl;
    }
}
