/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-28-13.25.11
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//76. move all 'x' to the end of the string.. axxbdxcefxhix => abdcefhixxxxx
#include<bits/stdc++.h>
using namespace std;
string movexlast(string text)
{
    if(text.length() == 0)
    {
        return "";
    }
    char ch = text[0];
    string textreturn = movexlast(text.substr(1));

    if(ch == 'x')
    {
        return (textreturn+ch);
    }
    return (ch+textreturn);
}
int main()
{
    string str = "axxbdxcefxhix";
    cout<<movexlast(str)<<endl;

    return 0;
}
