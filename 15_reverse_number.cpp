//15. reverse number

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,rev=0,lastDigit;
   cin>>n;
   while(n>0)
   {
       lastDigit = n%10;//1%10=1
       rev=rev*10+lastDigit;//432*10+1=4321
       n = n/10;
   }
   cout<<rev;

}

//----------------------another way ---------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
    }
}
