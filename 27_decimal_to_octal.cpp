//27. decimal to octal

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dec,arr[1000],i=0;
    cin>>dec;

    while(dec!=0){
        arr[i]=dec%8;
        dec=dec/8;
        ++i;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}
