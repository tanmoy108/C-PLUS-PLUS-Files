//25. Hexadecimal to decimal using function

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

//............... another way .........................

#include<bits/stdc++.h>
using namespace std;

void hexatodeci (string n)
{
    int sum=0;
    for(int i=n.length()-1,j=0;i>=0;i--,j++)
    {
        if(n[i]>='A' && n[i]<='F')
        {
            sum += int(n[i]-'A'+10)*pow(16,j);
        }
        else if(n[i]>='0' && n[i]<='9')
        {
            sum+=(n[i]-'0')*pow(16,j);
        }
    }
    cout<<sum;
    return;
}

int main()
{
    string  n;
    cin>>n;
    hexatodeci(n);
    return 0;
}
