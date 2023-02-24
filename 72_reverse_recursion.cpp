/* SOURCE HEADER
****************************************************************
   Date: Friday 2023-02-24-21.35.00
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//72. Reverse a string using recursion
#include<bits/stdc++.h>
using namespace std;

void rev(string text)
{
    if(text.length()==0)
    {
        return ;
    }
    string b = text.substr(1);
    rev(b);

    cout<<text[0];

}

int main()
{
    string str = "tanmoy";
    rev(str);
    return 0;
}
