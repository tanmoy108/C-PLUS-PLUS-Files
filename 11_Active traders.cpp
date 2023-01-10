//Active traders (hacker rank) tried

#include<bits/stdc++.h>
using namespace std;

bool comparator(string a,string b)
{
    return a<b;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,c,d,e=0;
    float percent;
    cin>>n;
    string customer[n],test[n]={},test2[n];
    for(int i=0; i<n; i++)
    {
        cin>>customer[i];
    }
    for(int i=0; i<n; i++)
    {
        c=1;
        d=0;
        for(int j=i+1; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(test[k]==customer[i])
                {
                    d++;
                    continue;
                }
            }
            if(d==0)
            {
                if(customer[i]==customer[j])
                {
                    c++;
                }
            }
        }
        if(c>=1 && d==0)
        {
            //cout<<customer[i]<<" = "<<c;
            test[i]=customer[i];
            //cout<<endl;
            percent=(c*100)/n;
        }
        if(percent>=5)
        {
            test2[i]=test[i];
            ++e;
        }
    }
    sort(test2,test2+e,comparator);
    for(int i=0;i<e;i++)
    {
        cout<<test2[i]<<" ";
    }
}
