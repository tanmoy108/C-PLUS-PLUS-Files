// 52. Transform string

//convert uppercase to lowercase and lowercase to uppercase

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "taNMoyShArMa";
    //'a'-'A' = 32
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i] -= 32;
        }
        else
            a[i] += 32;
    }
    cout<<a;
}

//.........................................................

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string b = "tanmoy";

    transform(b.begin(),b.end(),b.begin(),::toupper); // start end wheretostart function

    cout<<b<<endl;//TANMOY

    transform(b.begin(),b.end(),b.begin(),::tolower);
    cout<<b; //tanmoy

}
