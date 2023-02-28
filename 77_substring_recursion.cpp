/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-28-13.25.11
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//77. substring of a string using recursion.
#include<bits/stdc++.h>
using namespace std;
void substrng(string text,string a)
{
    if(text.length() == 0)
    {
        cout<<a<<endl;
        return;
    }
    char ch = text[0];
    string textreturn = text.substr(1);
    substrng(textreturn,a);
    //cout<<textreturn<<" a+ch=";
    //cout<<a+ch<<endl;
    substrng(textreturn,a+ch);
}
int main()
{
    string str = "ABC";
    substrng(str,"");

    return 0;
}
