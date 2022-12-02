/*An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Ai.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the length of the longest contiguous arithmetic subarray.

full details: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed
*/


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
