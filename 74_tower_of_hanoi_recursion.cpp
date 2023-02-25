/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-25-23.14.47
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//74. tower of hanoi using recursion
#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n, char src, char des, char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,src,helper,des);
    cout<<"Move From "<<src<<" to "<<des<<endl;
    towerofhanoi(n-1,helper,des,src);
}

int main()
{
    towerofhanoi(6,'A','B','C');
    return 0;
}
