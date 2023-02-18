/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-18-15.47.17
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//70. increasing and decreasing recursion
#include<bits/stdc++.h>
using namespace std;

void increasing2(int n)
{
    if(n == 1)
    {
        cout<< "1" <<endl;
        return;
    }
    increasing2(n-1);
    cout<<n<<endl;
}
void increasing(int n,int a)
{
    if(a > n)
    {
        return;
    }
    cout<<a<<endl;
    increasing(n,a+1);
}

void decreasing(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
}

int main()
{
    int n=6;
    int a = 1;
    //cin>>n;
    cout<<"decreasing :" <<endl;
    decreasing(n);
    cout<<"increasing :" <<endl;
    increasing(n,a);
    cout<<"increasing 2 :" <<endl;
    increasing2(n);
    return 0;
}
