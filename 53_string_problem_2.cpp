//53.biggest number to lowest number . 25134 -> 54321

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "25134";
    sort(a.begin(),a.end());
    cout<<a<<endl;
    for(int i=a.size()-1;i>=0;i--)
    {
        cout<<a[i];
    }

}

//.........................................

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "25134";
    sort(a.begin(),a.end(),greater<int>());
    cout<<a<<endl;

}
