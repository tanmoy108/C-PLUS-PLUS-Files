//decimal to binary

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,q,r,a=1,arr[100];
   cout<<"enter a decimal number: ";
   cin>>n;

   do
   {
       q=n/2;
       r=n%2;
       n=q;
       arr[a]=r;
       ++a;
       //cout<<r<<" ";
   }while(q!=0);

  for(int i=a-1;i>=1;i--)
  {
      cout<<arr[i];
  }
}
