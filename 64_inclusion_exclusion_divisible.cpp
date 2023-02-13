/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-11-14.01.44
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//64.  how many numbers between 1 and n are divisible a and b . (inclusion and exclusion principle)
#include<bits/stdc++.h>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n/a; // divisible by a
    int c2 = n/b; // divisible by b
    int c3 = n/(a*b); // divisible by both a and b

    cout<< c1<<" "<<c2<<" " <<c3<<endl;

    return c1+c2-c3;
}

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
    return 0;
}
