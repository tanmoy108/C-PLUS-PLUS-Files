/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-07-20.22.03
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//60. write a program to count the number of ones in binary representation of a number
#include<bits/stdc++.h>
using namespace std;

int countTheNumberOfOne(int n)
{
    int cnt=0;
    while(n!=0)
    {
        n = n&(n-1);
        cnt ++;
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;
    cout<<countTheNumberOfOne(n);
    return 0;
}
