//48. find palindrom word

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool check = true;

    char arr[n+1];
    cin>>arr;

    for(int i =0; arr[i]; i++)
    {
        if(arr[i] != arr[n-1-i] )
        {
            cout<<"not palindrom";
            check = false;
            break;
        }
    }

    if(check)
    {
        cout<<"palindrom";
    }


}
