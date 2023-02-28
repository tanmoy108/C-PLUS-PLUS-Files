/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-28-13.25.11
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//78. generate substrings with ASCII number using recursion.
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
    int code = ch;
    string textreturn = text.substr(1);
    substrng(textreturn,a);
    substrng(textreturn,a+ch);
    substrng(textreturn,a+to_string(code));
}
int main()
{
    string str = "AB";
    substrng(str,"");

    return 0;
}
