//54. find the frequency of the maximum presence character in a string and also print that character. such as : "abcdaega" in this string maximum frequency character is 'a' and its value 3. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a ="abcabdeebafbgabb";
    char d;
    int arr[26],b=0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<26;i++)
    {
        arr[i] = 0;
    }
    for(int i =0;i<a.size();i++)
    {
        int c = arr[a[i]-'a']++;
        if(c>b)
        {
            d = a[i];
        }
    }
    cout<<*max_element(arr,arr+n)<<" "<<d;

}

// char ch = 3+'a' => d
