//decimal to hexadecimal

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0,arr[1000];
    char hexa[100000];
    cin>>n;
    while(n!=0)
    {
        arr[i] = n%16;
        n = n/16;
        ++i;
    }

    for(int j =i-1;j>=0;--j)
    {
        // cout<<arr[j];
        if(arr[j]<10)
        {
           hexa[k] = arr[j] + 48;
        }
        else
        {
            hexa[k] = arr[j] +55;
        }
        ++k;
    }

    for(int j=0;j<i;j++)
    {
        cout<<hexa[j];
    }
}
