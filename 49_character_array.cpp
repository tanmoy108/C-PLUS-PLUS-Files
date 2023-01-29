//49. largest word length in a sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[] = "she has more money than he";
    int maxi = INT_MIN,cnt=0;
    for(int i =0; arr[i]; i++)
    {
        if(arr[i] != ' ')
        {
            cnt++;
        }
        else
        {
            maxi = max(maxi,cnt);
            cnt=0;
        }
    }
    maxi = max(maxi,cnt);
    cout<<maxi;

}

//largest word length with word in a sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int curlen = 0, maxlen = 0;
    int curst =0 , maxst = 0;
    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(curlen > maxlen)
            {
                maxlen = curlen;
                maxst = curst;
            }
            curlen =0;
            curst = i+1;
        }
        else
        curlen++;

        if(arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i =0 ;i<maxlen;i++)
    {
        cout<<arr[i+maxst];
    }
}
