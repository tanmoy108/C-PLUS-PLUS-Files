/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-28-12.37.19
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//75. Remove all duplicate character from the string. aaabbb => ab
#include<bits/stdc++.h>
using namespace std;

string removedupi(string text)//aaabbbfcccddde
{
    if(text.length() == 0)
    {
        return "";
    }
    char ch = text[0];// a
    string textreturn = removedupi(text.substr(1));//aabbbfcccddde
    //cout<<"textreturn "<<textreturn<<endl;
    if(ch == textreturn[0])
    {
        return textreturn;
    }
    return (ch+textreturn);
}

int main()
{
    string a = "aaabbb";
    cout<<removedupi(a);


    return 0;
}
