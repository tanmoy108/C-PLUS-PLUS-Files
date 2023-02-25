/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-25-22.13.16
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//73. replace 'pi' to '3.14' .. 
#include<bits/stdc++.h>
using namespace std;

void replacepi(string text)
{
    if(text.length() == 0)
    {
        return ;
    }

    if(text[0] == 'p' && text[1] == 'i')
    {
        cout<<"3.14";
        replacepi(text.substr(2));
    }
    else
    {
        cout<<text[0];
        replacepi(text.substr(1));
    }
}

int main()
{
    string str = "pipppqepieeepi";
    replacepi(str);
    return 0;
}
