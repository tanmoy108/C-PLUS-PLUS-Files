#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,c=1;
    cin>>b;
    while(c<=b)
    {
        cin >> n; //7
        int a[n]; //a[7]
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // 10 7 4 6 8 10 11
        }
        int ans = 2;
        int pd = a[1] - a[0]; // 7-10=-3
        int j = 2;
        int curr = 2;
        while (j < n) //2 < 7
        {
            if (pd == a[j] - a[j - 1]) // -3 == 4-7
            {
                curr++; // 3
            }
            else
            {
                pd = a[j] - a[j - 1];
                curr = 2;
            }
            ans = max(ans, curr); // 3
            j++;                  // 3
        }
        cout << "Case #"<< c <<": "<< ans << endl;
        c++;
    }
    return 0;
}
