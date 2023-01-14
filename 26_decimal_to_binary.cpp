//26. decimal to binary using function

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

//.........................another way .........................

#include<bits/stdc++.h>
using namespace std;
int arr[100000000];
void decitobin(int num)
{
    int sum=0,r,rev=0,i=1;
    while(num>0)
    {
        r=num%2;
        arr[i]=r;
        num = num / 2;
        ++i;
    }
    //cout<<i<<endl;
    for(int j = i-1;j>=1;j--)
    {
        cout<<arr[j];
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    decitobin(n);
    return 0;
}
