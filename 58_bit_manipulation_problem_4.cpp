/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-07-13.30.50
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//58. update bit . (clear + set) 

#include<bits/stdc++.h>
using namespace std;

int setbit(int a, int i, int value)
{
    return a|(value<<i); //0101 | 0010 <= (1<<1)
}

int clearbit(int n,int i)
{
    return n&(~(1<<i)); //0101 & 1101 <= ~(0010)
}

int main()
{
    int n = 5; // 0101
    int i = 1; // position
    int value = 1; // which value you want to set
    int a = clearbit(n,i);//0101
    cout<< setbit(a,i,value)<<endl; // 0111

}
