#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,sum=0;
    string hex;
    cin>>hex;
    for(int j=hex.length()-1;j>=0;j--)
    {
        if(hex[j]>='0' && hex[j]<='9')
        {
            sum += (hex[j]-'0')*pow(16,i);
        }
        else if(hex[j]>='A' && hex[j]<='F')
        {
            sum += int(hex[j]-'A'+10)*pow(16,i);
        }
        //cout<<i<<" ";
        ++i;
        //cout<<hex[j]<<" "<<sum<<endl;
    }
    cout<<sum;
}
