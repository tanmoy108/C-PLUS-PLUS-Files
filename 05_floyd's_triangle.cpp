//5. floyd's triangle

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,a=0;
    cout<<"row : ";
    cin>> row;

    for(int i=1;i<=row;i++) //row = 5 i = 2 2<=5
    {
        for(int j=1;j<=i;j++) // j = 1  2<=2
        {
                cout<<++a<<" "; //3
        }
        cout<<endl;
    }
}

// ....................... another way ...............................

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,count_num=1;
    cout<<"row : ";
    cin>> row;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<=i)
            {
                cout<<count_num++<<" ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
